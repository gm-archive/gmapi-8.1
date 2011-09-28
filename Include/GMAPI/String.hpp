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
#ifndef GMAPI_STRING_HPP
#define GMAPI_STRING_HPP
#include "Dll.hpp"
namespace gm
{
#pragma warning(push)
#pragma warning(disable:4200)
    struct StrStruct
    {
        unsigned short codepage;
        unsigned short elementSize;
        long volatile refcnt;
        unsigned len;
        char str[0];
    };
#pragma warning(pop)
    inline StrStruct *getStrStruct(char *gmstr)
    {
        return (StrStruct*)(gmstr - sizeof(StrStruct));
    }
    inline const StrStruct *getStrStruct(const char *gmstr)
    {
        return (const StrStruct*)(gmstr - sizeof(StrStruct));
    }
    inline unsigned gmstrLen(const char *gmstr)
    {
        return getStrStruct(gmstr)->len;
    }
    inline void strSetLen(char *gmstr, unsigned newlen)
    {
        getStrStruct(gmstr)->len = newlen;
    }
    
    GMAPI_DLL char *newStr(unsigned len);
    GMAPI_DLL char *newStr(const char *str);
    GMAPI_DLL char *newStr(const char *str, unsigned len);
    GMAPI_DLL void releaseStr(char *gmstr);
    GMAPI_DLL void strIncRef(char *gmstr);
}
#endif
