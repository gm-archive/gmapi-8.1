/* Copyright (c) 2011-2012 William Newbery
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
    /**@defgroup gm_functions_imp GM Function Call Implementation
     *
     * Implementation details for calling GM functions from C++.
     */
    ///@{
    /**@brief A pointer to a GM built in function.*/
    typedef void *Function;
    /**@brief Array of pointers to all the GM built in functions.*/
    GMAPI_DLL extern Function functions[];

    /**@brief Assembly function to call the GM function with the correct calling convention.*/
    GMAPI_DLL Value docall(Function f, Instance *self, Instance *other, unsigned argcnt, Value *args);
    /**@brief Call function with current self and other instances.*/
    inline Value docall(Function f, unsigned argcnt, Value *args)
    {
        return docall(f, getSelf(), getOther(), argcnt, args);
    }

    /**@name call functions
     *
     * Autogenerated call functions taking 0 to 16 gm::Value arguments which
     * are placed in an array and passed to the gm::docall method.
     */
    ///@{
    inline Value call(Function func)
    {
        Value args[] = {Value()};
        return docall(func, 0, args);
    }
    inline Value call(Function func, const Value &arg0)
    {
        Value args[] = {arg0, Value()};
        return docall(func, 1, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1)
    {
        Value args[] = {arg0, arg1, Value()};
        return docall(func, 2, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2)
    {
        Value args[] = {arg0, arg1, arg2, Value()};
        return docall(func, 3, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3)
    {
        Value args[] = {arg0, arg1, arg2, arg3, Value()};
        return docall(func, 4, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, Value()};
        return docall(func, 5, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, Value()};
        return docall(func, 6, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, Value()};
        return docall(func, 7, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, Value()};
        return docall(func, 8, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, Value()};
        return docall(func, 9, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, Value()};
        return docall(func, 10, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9, const Value &arg10)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, Value()};
        return docall(func, 11, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9, const Value &arg10, const Value &arg11)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg1, arg11, Value()};
        return docall(func, 12, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9, const Value &arg10, const Value &arg11, const Value &arg12)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, Value()};
        return docall(func, 13, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9, const Value &arg10, const Value &arg11, const Value &arg12, const Value &arg13)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, Value()};
        return docall(func, 14, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9, const Value &arg10, const Value &arg11, const Value &arg12, const Value &arg13, const Value &arg14)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, Value()};
        return docall(func, 15, args);
    }
    inline Value call(Function func, const Value &arg0, const Value &arg1, const Value &arg2, const Value &arg3, const Value &arg4, const Value &arg5, const Value &arg6, const Value &arg7, const Value &arg8, const Value &arg9, const Value &arg10, const Value &arg11, const Value &arg12, const Value &arg13, const Value &arg14, const Value &arg15)
    {
        Value args[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, Value()};
        return docall(func, 16, args);
    }
    ///@}
    ///@}
}
#endif
