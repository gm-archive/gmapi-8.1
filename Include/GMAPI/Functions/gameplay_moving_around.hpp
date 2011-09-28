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
#ifndef GMAPI_FUNCTIONS_GAMEPLAY_MOVING_AROUND_HPP
#define GMAPI_FUNCTIONS_GAMEPLAY_MOVING_AROUND_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    inline void motion_set(Real dir, Real speed)
    {
        call(functions[294], dir, speed);
    }
    
    inline void motion_add(Real dir, Real speed)
    {
        call(functions[295], dir, speed);
    }
    
    inline Real place_free(Real x, Real y)
    {
        return call(functions[296], x, y);
    }
    
    inline Real place_empty(Real x, Real y)
    {
        return call(functions[297], x, y);
    }
    
    inline Real place_meeting(Real x, Real y, Real obj)
    {
        return call(functions[298], x, y, obj);
    }
    
    inline Real place_snapped(Real hsnap, Real vsnap)
    {
        return call(functions[299], hsnap, vsnap);
    }
    
    inline void move_random(Real hsnap, Real vsnap)
    {
        call(functions[300], hsnap, vsnap);
    }
    
    inline void move_snap(Real hsnap, Real vsnap)
    {
        call(functions[301], hsnap, vsnap);
    }
    
    inline void move_wrap(Real hor, Real vert, Real margin)
    {
        call(functions[302], hor, vert, margin);
    }
    
    inline void move_towards_point(Real x, Real y, Real sp)
    {
        call(functions[303], x, y, sp);
    }
    
    inline void move_bounce_solid(Real adv)
    {
        call(functions[304], adv);
    }
    
    inline void move_bounce_all(Real adv)
    {
        call(functions[305], adv);
    }
    
    inline void move_contact_solid(Real dir, Real maxdist)
    {
        call(functions[306], dir, maxdist);
    }
    
    inline void move_contact_all(Real dir, Real maxdist)
    {
        call(functions[307], dir, maxdist);
    }
    
    inline void move_outside_solid(Real dir, Real maxdist)
    {
        call(functions[308], dir, maxdist);
    }
    
    inline void move_outside_all(Real dir, Real maxdist)
    {
        call(functions[309], dir, maxdist);
    }
    
    inline Real distance_to_point(Real x, Real y)
    {
        return call(functions[310], x, y);
    }
    
    inline void distance_to_object(Real obj)
    {
        call(functions[311], obj);
    }
    
    inline Real position_empty(Real x, Real y)
    {
        return call(functions[312], x, y);
    }
    
    inline Real position_meeting(Real x, Real y, Real obj)
    {
        return call(functions[313], x, y, obj);
    }
    
}
#endif
