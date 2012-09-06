#include "Precompiled.hpp"
#include "String.hpp"
#include "CallHook.hpp"
#include "CoreInternal.hpp"
#include "Value.hpp"
#include "Function.hpp"

//a, b, c, d = aex, ebx, ecx, edx
//S, D = esi, edi
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
        int unused;
        Value retv;
        Value *retvptr = &retv;
        __asm__
        (
            "push %1    \n\t"
            "push %2    \n\t"
            "push %3    \n\t"
            "call *%4   \n\t"
            :"=a"(unused)
            :"m"(args), "m"(argcnt), "m"(retvptr), "m"(f)
            ,"a"(self), "d"(other), "c"(argcnt)
            :
        );
        return retv;
    }
    GMAPI_DLL char *newStr(unsigned len)
    {
        char *res;
        __asm__
        (
            "mov     $65001, %%edx  \n\t"
            "call    *%1            \n\t"
            :"=a"(res)
            :"r"(delphiNewUtf8), "a"(len)
            :"%edx"
        );
        return res;
    }
    GMAPI_DLL void releaseStr(const char *gmstr)
    {
        int unused;
        __asm__
        (
            "call *%1"
            :"=a"(unused)
            :"r"(delphiReleaseStr), "a"(&gmstr)
            :
        );
    }
    GMAPI_DLL char *newStr(unsigned len, unsigned short elementSize, unsigned short codePage)
    {
        int alloclen = 12 + (elementSize*len) + 2;
        char *data = 0;

        __asm__
        (
            "call *%1"
            :"=a"(data)
            :"r"(delphiStrAlloc)
            :
        );

        *(unsigned short*)(data + 0) = codePage;
        *(unsigned short*)(data + 2) = elementSize;
        *(long*)(data + 4) = 1;
        *(unsigned*)(data + 8) = len;
        *(unsigned short*)(data + alloclen - 2) = 0;
        return data + 12;
    }

    GMAPI_DLL Value getVar(Instance *self, int varid, int unknown)
    {
        int unused;
        Value outval;
        __asm__
        (
            "push  %1   \n\t"
            "call *%2   \n\t"
            :"=a"(unused)
            :"r"(&outval), "r"(gmGetVar)
            ,"a"(self), "d"(varid), "c"(unknown)
            :
        );
        return outval;
    }
    GMAPI_DLL int getVarId(const DelphiString &name)
    {
        DelphiString name16 = DelphiString::utf16(name);
        int retval;
        const char *strData = name16.getData();
        __asm__
        (
            "call *%1"
            :"=a"(retval)
            :"r"(gmGetVarId), "a"(strData)
            :
        );
        return retval;
    }

    extern "C" void gmpaiAsmHookFunction();//defined in asm file
    extern "C" void* gmapiAsmGetShared;//used by asm file
    extern "C" void* gmapiAsmHookReturn;//used by asm file

    void* gmapiAsmGetShared = (void*)&getShared;
    void* gmapiAsmHookReturn = 0;

    void* hookFunctionPtr = (void*)gmpaiAsmHookFunction;
    void setHookReturn(void *ret)
    {
        gmapiAsmHookReturn = ret;
    }
}

