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
#ifndef GMAPI_FUNCTIONS_RESOURCES_ROOMS_HPP
#define GMAPI_FUNCTIONS_RESOURCES_ROOMS_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline Real room_exists(Real ind)
    {
        return call(functions[732], ind);
    }
    
    inline String room_get_name(Real ind)
    {
        return call(functions[733], ind);
    }
    
    inline void room_set_width(Real ind, Real w)
    {
        call(functions[734], ind, w);
    }
    
    inline void room_set_height(Real ind, Real h)
    {
        call(functions[735], ind, h);
    }
    
    inline void room_set_caption(Real ind, String str)
    {
        call(functions[736], ind, str);
    }
    
    inline void room_set_persistent(Real ind, Real val)
    {
        call(functions[737], ind, val);
    }
    
    inline void room_set_code(Real ind, String str)
    {
        call(functions[738], ind, str);
    }
    
    inline void room_set_background_color(Real ind, Real col, Real show)
    {
        call(functions[739], ind, col, show);
    }
    
    inline void room_set_background(Real ind, Real bind, Real vis, Real fore, Real back, Real x, Real y, Real htiled, Real vtiled, Real hspeed, Real vspeed, Real alpha)
    {
        call(functions[740], ind, bind, vis, fore, back, x, y, htiled, vtiled, hspeed, vspeed, alpha);
    }
    
    inline void room_set_view(Real ind, Real vind, Real vis, Real xview, Real yview, Real wview, Real hview, Real xport, Real yport, Real wport, Real hport, Real hborder, Real vborder, Real hspeed, Real vspeed, Real obj)
    {
        call(functions[741], ind, vind, vis, xview, yview, wview, hview, xport, yport, wport, hport, hborder, vborder, hspeed, vspeed, obj);
    }
    
    inline void room_set_view_enabled(Real ind, Real val)
    {
        call(functions[742], ind, val);
    }
    
    inline Real room_add()
    {
        return call(functions[743]);
    }
    
    inline Real room_duplicate(Real ind)
    {
        return call(functions[744], ind);
    }
    
    inline void room_assign(Real ind, Real room)
    {
        call(functions[745], ind, room);
    }
    
    inline void room_instance_add(Real ind, Real x, Real y, Real obj)
    {
        call(functions[746], ind, x, y, obj);
    }
    
    inline void room_instance_clear(Real ind)
    {
        call(functions[747], ind);
    }
    
    inline void room_tile_add(Real ind, Real back, Real left, Real top, Real width, Real height, Real x, Real y, Real depth)
    {
        call(functions[748], ind, back, left, top, width, height, x, y, depth);
    }
    
    inline void room_tile_add_ext(Real ind, Real back, Real left, Real top, Real width, Real height, Real x, Real y, Real depth, Real xscale, Real yscale, Real alpha)
    {
        call(functions[749], ind, back, left, top, width, height, x, y, depth, xscale, yscale, alpha);
    }
    
    inline void room_tile_clear(Real ind)
    {
        call(functions[750], ind);
    }
    
    ///@}
}
#endif
