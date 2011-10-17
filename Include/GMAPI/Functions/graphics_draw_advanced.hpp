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
#ifndef GMAPI_FUNCTIONS_GRAPHICS_DRAW_ADVANCED_HPP
#define GMAPI_FUNCTIONS_GRAPHICS_DRAW_ADVANCED_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline void draw_point_color(Real x, Real y, Real col1)
    {
        call(functions[342], x, y, col1);
    }
    
    inline void draw_line_color(Real x1, Real y1, Real x2, Real y2, Real col1, Real col2)
    {
        call(functions[343], x1, y1, x2, y2, col1, col2);
    }
    
    inline void draw_line_width_color(Real x1, Real y1, Real x2, Real y2, Real w, Real col1, Real col2)
    {
        call(functions[344], x1, y1, x2, y2, w, col1, col2);
    }
    
    inline void draw_rectangle_color(Real x1, Real y1, Real x2, Real y2, Real col1, Real col2, Real col3, Real col4, Real outline)
    {
        call(functions[345], x1, y1, x2, y2, col1, col2, col3, col4, outline);
    }
    
    inline void draw_roundrect_color(Real x1, Real y1, Real x2, Real y2, Real col1, Real col2, Real outline)
    {
        call(functions[346], x1, y1, x2, y2, col1, col2, outline);
    }
    
    inline void draw_triangle_color(Real x1, Real y1, Real x2, Real y2, Real x3, Real y3, Real col1, Real col2, Real col3, Real outline)
    {
        call(functions[347], x1, y1, x2, y2, x3, y3, col1, col2, col3, outline);
    }
    
    inline void draw_circle_color(Real x, Real y, Real r, Real col1, Real col2, Real outline)
    {
        call(functions[348], x, y, r, col1, col2, outline);
    }
    
    inline void draw_ellipse_color(Real x1, Real y1, Real x2, Real y2, Real col1, Real col2, Real outline)
    {
        call(functions[349], x1, y1, x2, y2, col1, col2, outline);
    }
    
    inline void draw_primitive_begin(Real kind)
    {
        call(functions[350], kind);
    }
    
    inline void draw_vertex(Real x, Real y)
    {
        call(functions[351], x, y);
    }
    
    inline void draw_vertex_color(Real x, Real y, Real col, Real alpha)
    {
        call(functions[352], x, y, col, alpha);
    }
    
    inline void draw_primitive_end()
    {
        call(functions[353]);
    }
    
    inline Real sprite_get_texture(Real spr, Real subimg)
    {
        return call(functions[354], spr, subimg);
    }
    
    inline Real background_get_texture(Real back)
    {
        return call(functions[355], back);
    }
    
    inline void texture_preload(Real texid)
    {
        call(functions[356], texid);
    }
    
    inline void texture_set_priority(Real texid, Real prio)
    {
        call(functions[357], texid, prio);
    }
    
    inline Real texture_get_width(Real texid)
    {
        return call(functions[358], texid);
    }
    
    inline Real texture_get_height(Real texid)
    {
        return call(functions[359], texid);
    }
    
    inline void draw_primitive_begin_texture(Real kind, Real texid)
    {
        call(functions[360], kind, texid);
    }
    
    inline void draw_vertex_texture(Real x, Real y, Real xtex, Real ytex)
    {
        call(functions[361], x, y, xtex, ytex);
    }
    
    inline void draw_vertex_texture_color(Real x, Real y, Real xtex, Real ytex, Real col, Real alpha)
    {
        call(functions[362], x, y, xtex, ytex, col, alpha);
    }
    
    inline void texture_set_interpolation(Real linear)
    {
        call(functions[363], linear);
    }
    
    inline void texture_set_blending(Real blend)
    {
        call(functions[364], blend);
    }
    
    inline void texture_set_repeat(Real repeat)
    {
        call(functions[365], repeat);
    }
    
    inline void draw_set_blend_mode(Real mode)
    {
        call(functions[366], mode);
    }
    
    inline void draw_set_blend_mode_ext(Real src, Real dest)
    {
        call(functions[367], src, dest);
    }
    
    ///@}
}
#endif
