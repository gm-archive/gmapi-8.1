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
#ifndef GMAPI_FUNCTIONS_GRAPHICS_SURFACES_HPP
#define GMAPI_FUNCTIONS_GRAPHICS_SURFACES_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    inline Real surface_create(Real w, Real h)
    {
        return call(functions[438], w, h);
    }
    
    inline void surface_free(Real id)
    {
        call(functions[439], id);
    }
    
    inline Real surface_exists(Real id)
    {
        return call(functions[440], id);
    }
    
    inline Real surface_get_width(Real id)
    {
        return call(functions[441], id);
    }
    
    inline Real surface_get_height(Real id)
    {
        return call(functions[442], id);
    }
    
    inline Real surface_get_texture(Real id)
    {
        return call(functions[443], id);
    }
    
    inline void surface_set_target(Real id)
    {
        call(functions[444], id);
    }
    
    inline void surface_reset_target()
    {
        call(functions[445]);
    }
    
    inline Real surface_getpixel(Real id, Real x, Real y)
    {
        return call(functions[446], id, x, y);
    }
    
    inline void surface_save(Real id, String fname)
    {
        call(functions[447], id, fname);
    }
    
    inline void surface_save_part(Real id, String fname, Real x, Real y, Real w, Real h)
    {
        call(functions[448], id, fname, x, y, w, h);
    }
    
    inline void draw_surface(Real id, Real x, Real y)
    {
        call(functions[449], id, x, y);
    }
    
    inline void draw_surface_stretched(Real id, Real x, Real y, Real w, Real h)
    {
        call(functions[450], id, x, y, w, h);
    }
    
    inline void draw_surface_tiled(Real id, Real x, Real y)
    {
        call(functions[451], id, x, y);
    }
    
    inline void draw_surface_part(Real id, Real left, Real top, Real width, Real height, Real x, Real y)
    {
        call(functions[452], id, left, top, width, height, x, y);
    }
    
    inline void draw_surface_ext(Real id, Real x, Real y, Real xscale, Real yscale, Real rot, Real color, Real alpha)
    {
        call(functions[453], id, x, y, xscale, yscale, rot, color, alpha);
    }
    
    inline void draw_surface_stretched_ext(Real id, Real x, Real y, Real w, Real h, Real color, Real alpha)
    {
        call(functions[454], id, x, y, w, h, color, alpha);
    }
    
    inline void draw_surface_tiled_ext(Real id, Real x, Real y, Real xscale, Real yscale, Real color, Real alpha)
    {
        call(functions[455], id, x, y, xscale, yscale, color, alpha);
    }
    
    inline void draw_surface_part_ext(Real id, Real left, Real top, Real width, Real height, Real x, Real y, Real xscale, Real yscale, Real color, Real alpha)
    {
        call(functions[456], id, left, top, width, height, x, y, xscale, yscale, color, alpha);
    }
    
    inline void draw_surface_general(Real id, Real left, Real top, Real width, Real height, Real x, Real y, Real xscale, Real yscale, Real rot, Real c1, Real c2, Real c3, Real c4, Real alpha)
    {
        call(functions[457], id, left, top, width, height, x, y, xscale, yscale, rot, c1, c2, c3, c4, alpha);
    }
    
    inline void surface_copy(Real destination, Real x, Real y, Real source)
    {
        call(functions[458], destination, x, y, source);
    }
    
    inline void surface_copy_part(Real destination, Real x, Real y, Real source, Real xs, Real ys, Real ws, Real hs)
    {
        call(functions[459], destination, x, y, source, xs, ys, ws, hs);
    }
    
}
#endif
