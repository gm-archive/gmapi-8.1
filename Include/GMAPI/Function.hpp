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
#ifndef GMAPI_FUNCTION_HPP
#define GMAPI_FUNCTION_HPP
#include "Value.hpp"
#include "Instance.hpp"
namespace gm
{
    typedef void *Function;
    GMAPI_DLL extern Function functions[];
    
    inline Value docall(Function f, Instance *self, Instance *other, unsigned argcnt, Value *args);
    inline Value docall(Function f, unsigned argcnt, Value *args)
    {
        return docall(f, getSelf(), getOther(), argcnt, args);
    }
    static Value docall(Function f, Instance *self, Instance *other, unsigned argcnt, Value *args)
    {
        Value retv;
        Value *retvptr = &retv;
        __asm
        {
            push args
            push argcnt
            push retvptr
            mov eax, other
            mov edx, self
            mov ecx, argcnt
            call f
        }
        return retv;
    }
    
    inline Value call(Function func)
    {
        return docall(func, 0, 0);
    }
    //----AUTOGENERATED CODE----//
    inline Value call(Function func, const Value &arg0)
    {
        Value args[] = {arg0};
        return docall(func, 1, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1)
    {
        Value args[] = {arg0, arg1};
        return docall(func, 2, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2)
    {
        Value args[] = {arg0, arg1, arg2};
        return docall(func, 3, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3)
    {
        Value args[] = {arg0, arg1, arg2, arg3};
        return docall(func, 4, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4};
        return docall(func, 5, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5};
        return docall(func, 6, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6};
        return docall(func, 7, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7};
        return docall(func, 8, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8};
        return docall(func, 9, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9};
        return docall(func, 10, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9, const Value &arg10)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10};
        return docall(func, 11, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9, const Value &arg10, const Value &arg11)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg1, arg11};
        return docall(func, 12, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9, const Value &arg10, const Value &arg11, const Value &arg12)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12};
        return docall(func, 13, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9, const Value &arg10, const Value &arg11, const Value &arg12, const Value &arg13)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13};
        return docall(func, 14, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9, const Value &arg10, const Value &arg11, const Value &arg12, const Value &arg13, const Value &arg14)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14};
        return docall(func, 15, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9, const Value &arg10, const Value &arg11, const Value &arg12, const Value &arg13, const Value &arg14, const Value &arg15)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15};
        return docall(func, 16, args);
    }
}
#endif
