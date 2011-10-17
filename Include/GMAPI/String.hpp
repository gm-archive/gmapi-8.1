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
    /**@brief A Delphi string object.
     * 
     * Stores various information about the string, with the string itself following this object.
     */
    struct StrStruct
    {
        /**The codepage for this string.*/
        unsigned short codepage;
        /**The size in bytes of a single element.*/
        unsigned short elementSize;
        /**The number of references to this string.*/
        long volatile refcnt;
        /**The number of elements in the string, excluding the final null
         * element.
         */
        unsigned len;
        /**The string itself, which follows on from here.
         * 
         * The string may contain embedded nulls, and is also garunteed to end
         * with a null.
         */
        char str[0];
    };
#pragma warning(pop)
    /**Gets a pointer to the start of the string object from the start of the
     * string itself.
     */
    inline StrStruct *getStrStruct(char *gmstr)
    {
        return (StrStruct*)(gmstr - sizeof(StrStruct));
    }
    inline const StrStruct *getStrStruct(const char *gmstr)
    {
        return (const StrStruct*)(gmstr - sizeof(StrStruct));
    }
    /**Gets the length of the Delphi string object. Since this just reads a
     * a field in the string object, it is far faster than searching for the
     * null with something like strlen, and also handles strings with embedded
     * nulls correctly.
     */
    inline unsigned gmstrLen(const char *gmstr)
    {
        return getStrStruct(gmstr)->len;
    }
    inline void strSetLen(char *gmstr, unsigned newlen)
    {
        getStrStruct(gmstr)->len = newlen;
    }
    
    /**Allocates a new UTF8 Delphi string object with space for len elements.*/
    GMAPI_DLL char *newStr(unsigned len);
    /**Allocates a new UTF8 Delphi string object initially storing a copy of 
     * the null terminated string str.
     */
    GMAPI_DLL char *newStr(const char *str);
    /**Allocates a new UTF8 Delphi string object initially storing a copy of 
     * the string str with length len.
     */
    GMAPI_DLL char *newStr(const char *str, unsigned len);
    /**Decrements the string objects reference counter, destroying it if the
     * reference count reaches zero.
     */
    GMAPI_DLL void releaseStr(char *gmstr);
    /**Adds an extra reference to the string object.*/
    GMAPI_DLL void strIncRef(char *gmstr);
}
#endif
