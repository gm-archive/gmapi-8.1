#include "Precompiled.hpp"
#include "String.hpp"
#include "CallHook.hpp"
#include "CoreInternal.hpp"
#include "Value.hpp"
#include "Function.hpp"

namespace gm
{
    //string.cpp
    extern const void *delphiStrAlloc;
    extern const void *delphiNewUtf8;
    extern const void *delphiReleaseStr;
    extern const void *gmGetVar;
    extern const void *gmGetVarId;
    GMAPI_DLL Value docall(Function f, Instance *self, Instance *other, unsigned argcnt, Value *args)
    {
        Value retv;
        Value *retvptr = &retv;
        __asm
        {
            push args
            push argcnt
            push retvptr
            mov eax, self
            mov edx, other
            mov ecx, argcnt
            call f
        }
        return retv;
    }
    GMAPI_DLL char *newStr(unsigned len)
    {
        char *res;
        __asm
        {
            mov     eax, len
            mov     edx, CP_UTF8
            call    delphiNewUtf8
            mov     res, eax
        }
        return res;
    }
    GMAPI_DLL void releaseStr(const char *gmstr)
    {
        if(gmstr)
        {
            __asm
            {
                lea     eax, gmstr
                call    delphiReleaseStr
            }
        }
    }
    GMAPI_DLL char *newStr(unsigned len, unsigned short elementSize, unsigned short codePage)
    {
        int alloclen = 12 + (elementSize*len) + 2;
        char *data = 0;
        
        __asm
        {
            mov eax, alloclen
            call delphiStrAlloc
            mov data, eax
        }
        
        *(unsigned short*)(data + 0) = codePage;
        *(unsigned short*)(data + 2) = elementSize;
        *(long*)(data + 4) = 1;
        *(unsigned*)(data + 8) = len;
        *(unsigned short*)(data + alloclen - 2) = 0;
        return data + 12;
    }

    GMAPI_DLL void getVar(Instance *self, int varid, int unknown, Value *outval)
    {
        __asm
        {
            mov     eax, self
            mov     edx, varid
            mov     ecx, unknown
            push    outval
            call    gmGetVar
        }
    }
    GMAPI_DLL int getVarId(const wchar_t *delphiStringU16)
    {
        int retval;
        __asm
        {
            mov eax, delphiStringU16
            call gmGetVarId
            mov retval, eax
        }
        return retval;
    }

    __declspec(naked) void hookFunction()
    {
        __asm 
        {
            ;save stuff
            push    eax
            push    ecx
            push    edx

                push    eax
                push    edx

                call    getShared

                pop     edx
                mov     dword ptr [eax]Shared.other, edx
                pop     edx
                mov     dword ptr [eax]Shared.self, edx

            pop     edx
            pop     ecx
            pop     eax
            ;overwritten code
            push    ebp
            mov     ebp,esp
            add     esp,0FFFFFE64h
            ;push   ebx
            ;push   esi
            ;push   edi
            jmp     hookReturn
        }
    }
}
