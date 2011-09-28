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
#ifndef GMAPI_FUNCTIONS_RESOURCES_PATHS_HPP
#define GMAPI_FUNCTIONS_RESOURCES_PATHS_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    inline Real path_exists(Real ind)
    {
        return call(functions[620], ind);
    }
    
    inline String path_get_name(Real ind)
    {
        return call(functions[621], ind);
    }
    
    inline Real path_get_length(Real ind)
    {
        return call(functions[622], ind);
    }
    
    inline Real path_get_kind(Real ind)
    {
        return call(functions[623], ind);
    }
    
    inline Real path_get_closed(Real ind)
    {
        return call(functions[624], ind);
    }
    
    inline Real path_get_precision(Real ind)
    {
        return call(functions[625], ind);
    }
    
    inline Real path_get_number(Real ind)
    {
        return call(functions[626], ind);
    }
    
    inline Real path_get_point_x(Real ind, Real n)
    {
        return call(functions[627], ind, n);
    }
    
    inline Real path_get_point_y(Real ind, Real n)
    {
        return call(functions[628], ind, n);
    }
    
    inline Real path_get_point_speed(Real ind, Real n)
    {
        return call(functions[629], ind, n);
    }
    
    inline Real path_get_x(Real ind, Real pos)
    {
        return call(functions[630], ind, pos);
    }
    
    inline Real path_get_y(Real ind, Real pos)
    {
        return call(functions[631], ind, pos);
    }
    
    inline Real path_get_speed(Real ind, Real pos)
    {
        return call(functions[632], ind, pos);
    }
    
    inline void path_set_kind(Real ind, Real val)
    {
        call(functions[633], ind, val);
    }
    
    inline void path_set_closed(Real ind, Real closed)
    {
        call(functions[634], ind, closed);
    }
    
    inline void path_set_precision(Real ind, Real prec)
    {
        call(functions[635], ind, prec);
    }
    
    inline Real path_add()
    {
        return call(functions[636]);
    }
    
    inline void path_delete(Real ind)
    {
        call(functions[637], ind);
    }
    
    inline Real path_duplicate(Real ind)
    {
        return call(functions[638], ind);
    }
    
    inline void path_assign(Real ind, Real path)
    {
        call(functions[639], ind, path);
    }
    
    inline void path_append(Real ind, Real path)
    {
        call(functions[640], ind, path);
    }
    
    inline void path_add_point(Real ind, Real x, Real y, Real speed)
    {
        call(functions[641], ind, x, y, speed);
    }
    
    inline void path_insert_point(Real ind, Real n, Real x, Real y, Real speed)
    {
        call(functions[642], ind, n, x, y, speed);
    }
    
    inline void path_change_point(Real ind, Real n, Real x, Real y, Real speed)
    {
        call(functions[643], ind, n, x, y, speed);
    }
    
    inline void path_delete_point(Real ind, Real n)
    {
        call(functions[644], ind, n);
    }
    
    inline void path_clear_points(Real ind)
    {
        call(functions[645], ind);
    }
    
    inline void path_reverse(Real ind)
    {
        call(functions[646], ind);
    }
    
    inline void path_mirror(Real ind)
    {
        call(functions[647], ind);
    }
    
    inline void path_flip(Real ind)
    {
        call(functions[648], ind);
    }
    
    inline void path_rotate(Real ind, Real angle)
    {
        call(functions[649], ind, angle);
    }
    
    inline void path_scale(Real ind, Real xscale, Real yscale)
    {
        call(functions[650], ind, xscale, yscale);
    }
    
    inline void path_shift(Real ind, Real xshift, Real yshift)
    {
        call(functions[651], ind, xshift, yshift);
    }
    
}
#endif
