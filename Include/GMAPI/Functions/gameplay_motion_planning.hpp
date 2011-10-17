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
#ifndef GMAPI_FUNCTIONS_GAMEPLAY_MOTION_PLANNING_HPP
#define GMAPI_FUNCTIONS_GAMEPLAY_MOTION_PLANNING_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline Real mp_linear_step(Real x, Real y, Real stepsize, Real checkall)
    {
        return call(functions[275], x, y, stepsize, checkall);
    }
    
    inline Real mp_linear_step_object(Real x, Real y, Real stepsize, Real obj)
    {
        return call(functions[276], x, y, stepsize, obj);
    }
    
    inline Real mp_potential_step(Real x, Real y, Real stepsize, Real checkall)
    {
        return call(functions[277], x, y, stepsize, checkall);
    }
    
    inline Real mp_potential_step_object(Real x, Real y, Real stepsize, Real obj)
    {
        return call(functions[278], x, y, stepsize, obj);
    }
    
    inline Real mp_potential_settings(Real maxrot, Real rotstep, Real ahead, Real onspot)
    {
        return call(functions[279], maxrot, rotstep, ahead, onspot);
    }
    
    inline Real mp_linear_path(Real path, Real xg, Real yg, Real stepsize, Real checkall)
    {
        return call(functions[280], path, xg, yg, stepsize, checkall);
    }
    
    inline Real mp_linear_path_object(Real path, Real xg, Real yg, Real stepsize, Real obj)
    {
        return call(functions[281], path, xg, yg, stepsize, obj);
    }
    
    inline Real mp_potential_path(Real path, Real xg, Real yg, Real stepsize, Real factor, Real checkall)
    {
        return call(functions[282], path, xg, yg, stepsize, factor, checkall);
    }
    
    inline Real mp_potential_path_object(Real path, Real xg, Real yg, Real stepsize, Real factor, Real obj)
    {
        return call(functions[283], path, xg, yg, stepsize, factor, obj);
    }
    
    inline Real mp_grid_create(Real left, Real top, Real hcells, Real vcells, Real cellwidth, Real cellheight)
    {
        return call(functions[284], left, top, hcells, vcells, cellwidth, cellheight);
    }
    
    inline void mp_grid_destroy(Real id)
    {
        call(functions[285], id);
    }
    
    inline void mp_grid_clear_all(Real id)
    {
        call(functions[286], id);
    }
    
    inline void mp_grid_clear_cell(Real id, Real h, Real v)
    {
        call(functions[287], id, h, v);
    }
    
    inline void mp_grid_clear_rectangle(Real id, Real left, Real top, Real right, Real bottom)
    {
        call(functions[288], id, left, top, right, bottom);
    }
    
    inline void mp_grid_add_cell(Real id, Real h, Real v)
    {
        call(functions[289], id, h, v);
    }
    
    inline void mp_grid_add_rectangle(Real id, Real left, Real top, Real right, Real bottom)
    {
        call(functions[290], id, left, top, right, bottom);
    }
    
    inline void mp_grid_add_instances(Real id, Real obj, Real prec)
    {
        call(functions[291], id, obj, prec);
    }
    
    inline void mp_grid_path(Real id, Real path, Real xstart, Real ystart, Real xgoal, Real ygoal, Real allowdiag)
    {
        call(functions[292], id, path, xstart, ystart, xgoal, ygoal, allowdiag);
    }
    
    inline void mp_grid_draw(Real id)
    {
        call(functions[293], id);
    }
    
    ///@}
}
#endif
