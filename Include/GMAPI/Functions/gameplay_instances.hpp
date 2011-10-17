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
#ifndef GMAPI_FUNCTIONS_GAMEPLAY_INSTANCES_HPP
#define GMAPI_FUNCTIONS_GAMEPLAY_INSTANCES_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline Real instance_find(Real obj, Real n)
    {
        return call(functions[246], obj, n);
    }
    
    inline Real instance_exists(Real obj)
    {
        return call(functions[247], obj);
    }
    
    inline Real instance_number(Real obj)
    {
        return call(functions[248], obj);
    }
    
    inline Real instance_position(Real x, Real y, Real obj)
    {
        return call(functions[249], x, y, obj);
    }
    
    inline Real instance_nearest(Real x, Real y, Real obj)
    {
        return call(functions[250], x, y, obj);
    }
    
    inline Real instance_furthest(Real x, Real y, Real obj)
    {
        return call(functions[251], x, y, obj);
    }
    
    inline Real instance_place(Real x, Real y, Real obj)
    {
        return call(functions[252], x, y, obj);
    }
    
    inline Real instance_create(Real x, Real y, Real obj)
    {
        return call(functions[253], x, y, obj);
    }
    
    inline Real instance_copy(Real performevent)
    {
        return call(functions[254], performevent);
    }
    
    inline void instance_destroy()
    {
        call(functions[255]);
    }
    
    inline void instance_change(Real obj, Real perf)
    {
        call(functions[256], obj, perf);
    }
    
    inline void position_destroy(Real x, Real y)
    {
        call(functions[257], x, y);
    }
    
    inline void position_change(Real x, Real y, Real obj, Real perf)
    {
        call(functions[258], x, y, obj, perf);
    }
    
    ///@}
}
#endif
