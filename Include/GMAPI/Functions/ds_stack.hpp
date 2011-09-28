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
//Auto-Generated File
#ifndef GMAPI_FUNCTIONS_DS_STACK_HPP
#define GMAPI_FUNCTIONS_DS_STACK_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    inline Real ds_stack_create()
    {
        return call(functions[220]);
    }
    
    inline void ds_stack_destroy(Real id)
    {
        call(functions[221], id);
    }
    
    inline void ds_stack_clear(Real id)
    {
        call(functions[222], id);
    }
    
    inline Real ds_stack_copy(Real id, Real source)
    {
        return call(functions[223], id, source);
    }
    
    inline Real ds_stack_size(Real id)
    {
        return call(functions[224], id);
    }
    
    inline Real ds_stack_empty(Real id)
    {
        return call(functions[225], id);
    }
    
    inline void ds_stack_push(Real id, Value val)
    {
        call(functions[226], id, val);
    }
    
    inline Value ds_stack_pop(Real id)
    {
        return call(functions[227], id);
    }
    
    inline Value ds_stack_top(Real id)
    {
        return call(functions[228], id);
    }
    
    inline String ds_stack_write(Real id)
    {
        return call(functions[229], id);
    }
    
    inline void ds_stack_read(Real id, String str)
    {
        call(functions[230], id, str);
    }
    
}
#endif
