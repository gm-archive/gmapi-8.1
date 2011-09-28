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
#ifndef GMAPI_FUNCTIONS_DS_MAP_HPP
#define GMAPI_FUNCTIONS_DS_MAP_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    inline Real ds_map_create()
    {
        return call(functions[175]);
    }
    
    inline void ds_map_destroy(Real id)
    {
        call(functions[176], id);
    }
    
    inline void ds_map_clear(Real id)
    {
        call(functions[177], id);
    }
    
    inline Real ds_map_copy(Real id, Real source)
    {
        return call(functions[178], id, source);
    }
    
    inline Real ds_map_size(Real id)
    {
        return call(functions[179], id);
    }
    
    inline Real ds_map_empty(Real id)
    {
        return call(functions[180], id);
    }
    
    inline void ds_map_add(Real id, Value key, Value val)
    {
        call(functions[181], id, key, val);
    }
    
    inline void ds_map_replace(Real id, Value key, Value val)
    {
        call(functions[182], id, key, val);
    }
    
    inline void ds_map_delete(Real id, Value key)
    {
        call(functions[183], id, key);
    }
    
    inline Real ds_map_exists(Real id, Value key)
    {
        return call(functions[184], id, key);
    }
    
    inline Value ds_map_find_value(Real id, Value key)
    {
        return call(functions[185], id, key);
    }
    
    inline Value ds_map_find_previous(Real id, Value key)
    {
        return call(functions[186], id, key);
    }
    
    inline Value ds_map_find_next(Real id, Value key)
    {
        return call(functions[187], id, key);
    }
    
    inline Value ds_map_find_first(Real id)
    {
        return call(functions[188], id);
    }
    
    inline Value ds_map_find_last(Real id)
    {
        return call(functions[189], id);
    }
    
    inline String ds_map_write(Real id)
    {
        return call(functions[190], id);
    }
    
    inline void ds_map_read(Real id, String str)
    {
        call(functions[191], id, str);
    }
    
}
#endif
