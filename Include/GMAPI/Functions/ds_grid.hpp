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
#ifndef GMAPI_FUNCTIONS_DS_GRID_HPP
#define GMAPI_FUNCTIONS_DS_GRID_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline Real ds_grid_create(Real w, Real h)
    {
        return call(functions[122], w, h);
    }
    
    inline void ds_grid_destroy(Real id)
    {
        call(functions[123], id);
    }
    
    inline void ds_grid_copy(Real id, Real source)
    {
        call(functions[124], id, source);
    }
    
    inline void ds_grid_resize(Real id, Real w, Real h)
    {
        call(functions[125], id, w, h);
    }
    
    inline Real ds_grid_width(Real id)
    {
        return call(functions[126], id);
    }
    
    inline Real ds_grid_height(Real id)
    {
        return call(functions[127], id);
    }
    
    inline void ds_grid_clear(Real id, Value val)
    {
        call(functions[128], id, val);
    }
    
    inline void ds_grid_set(Real id, Real x, Real y, Value val)
    {
        call(functions[129], id, x, y, val);
    }
    
    inline void ds_grid_add(Real id, Real x, Real y, Value val)
    {
        call(functions[130], id, x, y, val);
    }
    
    inline void ds_grid_multiply(Real id, Real x, Real y, Real val)
    {
        call(functions[131], id, x, y, val);
    }
    
    inline void ds_grid_set_region(Real id, Real x1, Real y1, Real x2, Real y2, Value val)
    {
        call(functions[132], id, x1, y1, x2, y2, val);
    }
    
    inline void ds_grid_add_region(Real id, Real x1, Real y1, Real x2, Real y2, Value val)
    {
        call(functions[133], id, x1, y1, x2, y2, val);
    }
    
    inline void ds_grid_multiply_region(Real id, Real x1, Real y1, Real x2, Real y2, Real val)
    {
        call(functions[134], id, x1, y1, x2, y2, val);
    }
    
    inline void ds_grid_set_disk(Real id, Real xm, Real ym, Real r, Value val)
    {
        call(functions[135], id, xm, ym, r, val);
    }
    
    inline void ds_grid_add_disk(Real id, Real xm, Real ym, Real r, Value val)
    {
        call(functions[136], id, xm, ym, r, val);
    }
    
    inline void ds_grid_multiply_disk(Real id, Real xm, Real ym, Real r, Real val)
    {
        call(functions[137], id, xm, ym, r, val);
    }
    
    inline void ds_grid_set_grid_region(Real id, Real source, Real x1, Real y1, Real x2, Real y2, Real xpos, Real ypos)
    {
        call(functions[138], id, source, x1, y1, x2, y2, xpos, ypos);
    }
    
    inline void ds_grid_add_grid_region(Real id, Real source, Real x1, Real y1, Real x2, Real y2, Real xpos, Real ypos)
    {
        call(functions[139], id, source, x1, y1, x2, y2, xpos, ypos);
    }
    
    inline void ds_grid_multiply_grid_region(Real id, Real source, Real x1, Real y1, Real x2, Real y2, Real xpos, Real ypos)
    {
        call(functions[140], id, source, x1, y1, x2, y2, xpos, ypos);
    }
    
    inline Value ds_grid_get(Real id, Real x, Real y)
    {
        return call(functions[141], id, x, y);
    }
    
    inline Real ds_grid_get_sum(Real id, Real x1, Real y1, Real x2, Real y2)
    {
        return call(functions[142], id, x1, y1, x2, y2);
    }
    
    inline Real ds_grid_get_max(Real id, Real x1, Real y1, Real x2, Real y2)
    {
        return call(functions[143], id, x1, y1, x2, y2);
    }
    
    inline Real ds_grid_get_min(Real id, Real x1, Real y1, Real x2, Real y2)
    {
        return call(functions[144], id, x1, y1, x2, y2);
    }
    
    inline Real ds_grid_get_mean(Real id, Real x1, Real y1, Real x2, Real y2)
    {
        return call(functions[145], id, x1, y1, x2, y2);
    }
    
    inline Real ds_grid_get_disk_sum(Real id, Real xm, Real ym, Real r)
    {
        return call(functions[146], id, xm, ym, r);
    }
    
    inline Real ds_grid_get_disk_min(Real id, Real xm, Real ym, Real r)
    {
        return call(functions[147], id, xm, ym, r);
    }
    
    inline Real ds_grid_get_disk_max(Real id, Real xm, Real ym, Real r)
    {
        return call(functions[148], id, xm, ym, r);
    }
    
    inline Real ds_grid_get_disk_mean(Real id, Real xm, Real ym, Real r)
    {
        return call(functions[149], id, xm, ym, r);
    }
    
    inline Real ds_grid_value_exists(Real id, Real x1, Real y1, Real x2, Real y2, Value val)
    {
        return call(functions[150], id, x1, y1, x2, y2, val);
    }
    
    inline Real ds_grid_value_x(Real id, Real x1, Real y1, Real x2, Real y2, Value val)
    {
        return call(functions[151], id, x1, y1, x2, y2, val);
    }
    
    inline Real ds_grid_value_y(Real id, Real x1, Real y1, Real x2, Real y2, Value val)
    {
        return call(functions[152], id, x1, y1, x2, y2, val);
    }
    
    inline Real ds_grid_value_disk_exists(Real id, Real xm, Real ym, Real r, Value val)
    {
        return call(functions[153], id, xm, ym, r, val);
    }
    
    inline Real ds_grid_value_disk_x(Real id, Real xm, Real ym, Real r, Value val)
    {
        return call(functions[154], id, xm, ym, r, val);
    }
    
    inline Real ds_grid_value_disk_y(Real id, Real xm, Real ym, Real r, Value val)
    {
        return call(functions[155], id, xm, ym, r, val);
    }
    
    inline void ds_grid_shuffle(Real id)
    {
        call(functions[156], id);
    }
    
    inline String ds_grid_write(Real id)
    {
        return call(functions[157], id);
    }
    
    inline void ds_grid_read(Real id, String str)
    {
        call(functions[158], id, str);
    }
    
    ///@}
}
#endif
