/* Copyright (c) 2011 William Newbery
 * 
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 * 
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 * 
 * 1. The origin of this software must not be misrepresented; you must not
 * claim that you wrote the original software. If you use this software
 * in a product, an acknowledgment in the product documentation would be
 * appreciated but is not required.
 * 
 * 2. Altered source versions must be plainly marked as such, and must not be
 * misrepresented as being the original software.
 * 
 * 3. This notice may not be removed or altered from any source
 * distribution.
 */
#include "Precompiled.hpp"
#include "String.hpp"
#include "CoreInternal.hpp"
#include "BinSearch.hpp"
namespace gm
{
    const void *delphiNewUtf8     = 0;
    const void *delphiReleaseStr  = 0;
    
    GMAPI_DLL char *newStr(unsigned len)
    {
        char *res;
        __asm
        {
            mov     esi, len
            mov     edi, 0
            mov     eax, len
            mov     ecx, 0
            mov     ebx, 0
            mov     edx, 0
            call    delphiNewUtf8
            mov res, eax
        }
        return res;
    }
    GMAPI_DLL char *newStr(const char *str)
    {
        return newStr(str, strlen(str));
    }
    GMAPI_DLL char *newStr(const char *str, unsigned len)
    {
        char *gmstr = newStr(len);
        memcpy(gmstr, str, len);
        return gmstr;
    }
    GMAPI_DLL void releaseStr(char *gmstr)
    {
        if(gmstr)
        {
            __asm
            {
                lea eax, gmstr
                call delphiReleaseStr
            }
        }
    }
    GMAPI_DLL void strIncRef(char *gmstr)
    {
        InterlockedIncrement(&getStrStruct(gmstr)->refcnt);
    }
    bool initStrings()
    {
        delphiNewUtf8    = searchMemory(DELPHI_NEWUTF8_PATTERN, DELPHI_NEWUTF8_PATTERN_LEN);
        delphiReleaseStr = searchMemory(DELPHI_RELEASESTR_PATTERN, DELPHI_RELEASESTR_PATTERN_LEN);
        return delphiNewUtf8 && delphiReleaseStr;
    }
}
