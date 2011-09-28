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
#ifndef GMAPI_FUNCTIONS_DS_PRIORITY_QUEUE_HPP
#define GMAPI_FUNCTIONS_DS_PRIORITY_QUEUE_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    inline Real ds_priority_create()
    {
        return call(functions[192]);
    }
    
    inline void ds_priority_destroy(Real id)
    {
        call(functions[193], id);
    }
    
    inline void ds_priority_clear(Real id)
    {
        call(functions[194], id);
    }
    
    inline void ds_priority_copy(Real id, Real source)
    {
        call(functions[195], id, source);
    }
    
    inline Real ds_priority_size(Real id)
    {
        return call(functions[196], id);
    }
    
    inline Real ds_priority_empty(Real id)
    {
        return call(functions[197], id);
    }
    
    inline void ds_priority_add(Real id, Value val, Real prio)
    {
        call(functions[198], id, val, prio);
    }
    
    inline void ds_priority_change_priority(Real id, Value val, Real prio)
    {
        call(functions[199], id, val, prio);
    }
    
    inline Value ds_priority_find_priority(Real id, Value val)
    {
        return call(functions[200], id, val);
    }
    
    inline void ds_priority_delete_value(Real id, Value val)
    {
        call(functions[201], id, val);
    }
    
    inline void ds_priority_delete_min(Real id)
    {
        call(functions[202], id);
    }
    
    inline Value ds_priority_find_min(Real id)
    {
        return call(functions[203], id);
    }
    
    inline void ds_priority_delete_max(Real id)
    {
        call(functions[204], id);
    }
    
    inline Value ds_priority_find_max(Real id)
    {
        return call(functions[205], id);
    }
    
    inline String ds_priority_write(Real id)
    {
        return call(functions[206], id);
    }
    
    inline void ds_priority_read(Real id, String str)
    {
        call(functions[207], id, str);
    }
    
}
#endif
