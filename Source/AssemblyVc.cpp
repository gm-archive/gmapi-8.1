#include "Precompiled.hpp"
#include "String.hpp"
#include "CallHook.hpp"
#include "CoreInternal.hpp"

namespace gm
{
    extern const void *delphiNewUtf8;
    extern const void *delphiReleaseStr;
    GMAPI_DLL char *newStr(unsigned len)
    {
        char *res;
        __asm
        {
            mov     eax, len
            mov     edx, 0
            call    delphiNewUtf8
            mov     res, eax
        }
        return res;
    }
    GMAPI_DLL void releaseStr(char *gmstr)
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
                mov     dword ptr [eax]Shared.self, edx
                pop     edx
                mov     dword ptr [eax]Shared.other, edx

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
