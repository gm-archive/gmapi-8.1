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
#ifndef GMAPI_FUNCTIONS_GRAPHICS_DRAW_SHAPES_HPP
#define GMAPI_FUNCTIONS_GRAPHICS_DRAW_SHAPES_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    inline void draw_clear(Real col)
    {
        call(functions[377], col);
    }
    
    inline void draw_clear_alpha(Real col, Real alpha)
    {
        call(functions[378], col, alpha);
    }
    
    inline void draw_point(Real x, Real y)
    {
        call(functions[379], x, y);
    }
    
    inline void draw_line(Real x1, Real y1, Real x2, Real y2)
    {
        call(functions[380], x1, y1, x2, y2);
    }
    
    inline void draw_line_width(Real x1, Real y1, Real x2, Real y2, Real w)
    {
        call(functions[381], x1, y1, x2, y2, w);
    }
    
    inline void draw_rectangle(Real x1, Real y1, Real x2, Real y2, Real outline)
    {
        call(functions[382], x1, y1, x2, y2, outline);
    }
    
    inline void draw_roundrect(Real x1, Real y1, Real x2, Real y2, Real outline)
    {
        call(functions[383], x1, y1, x2, y2, outline);
    }
    
    inline void draw_triangle(Real x1, Real y1, Real x2, Real y2, Real x3, Real y3, Real outline)
    {
        call(functions[384], x1, y1, x2, y2, x3, y3, outline);
    }
    
    inline void draw_circle(Real x, Real y, Real r, Real outline)
    {
        call(functions[385], x, y, r, outline);
    }
    
    inline void draw_ellipse(Real x1, Real y1, Real x2, Real y2, Real outline)
    {
        call(functions[386], x1, y1, x2, y2, outline);
    }
    
    inline void draw_set_circle_precision(Real precision)
    {
        call(functions[387], precision);
    }
    
    inline void draw_arrow(Real x1, Real y1, Real x2, Real y2, Real size)
    {
        call(functions[388], x1, y1, x2, y2, size);
    }
    
    inline void draw_button(Real x1, Real y1, Real x2, Real y2, Real up)
    {
        call(functions[389], x1, y1, x2, y2, up);
    }
    
    inline void draw_path(Real path, Real x, Real y, Real absolute)
    {
        call(functions[390], path, x, y, absolute);
    }
    
    inline void draw_healthbar(Real x1, Real y1, Real x2, Real y2, Real amount, Real backcol, Real mincol, Real maxcol, Real direction, Real showback, Real showborder)
    {
        call(functions[391], x1, y1, x2, y2, amount, backcol, mincol, maxcol, direction, showback, showborder);
    }
    
    inline void draw_set_color(Real col)
    {
        call(functions[392], col);
    }
    
    inline void draw_set_alpha(Real alpha)
    {
        call(functions[393], alpha);
    }
    
    inline Real draw_get_color()
    {
        return call(functions[394]);
    }
    
    inline Real draw_get_alpha()
    {
        return call(functions[395]);
    }
    
    inline Real make_color_rgb(Real red, Real green, Real blue)
    {
        return call(functions[396], red, green, blue);
    }
    
    inline Real make_color_hsv(Real hue, Real saturation, Real value)
    {
        return call(functions[397], hue, saturation, value);
    }
    
    inline Real color_get_red(Real col)
    {
        return call(functions[398], col);
    }
    
    inline Real color_get_green(Real col)
    {
        return call(functions[399], col);
    }
    
    inline Real color_get_blue(Real col)
    {
        return call(functions[400], col);
    }
    
    inline Real color_get_hue(Real col)
    {
        return call(functions[401], col);
    }
    
    inline Real color_get_saturation(Real col)
    {
        return call(functions[402], col);
    }
    
    inline Real color_get_value(Real col)
    {
        return call(functions[403], col);
    }
    
    inline Real merge_color(Real col1, Real col2, Real amount)
    {
        return call(functions[404], col1, col2, amount);
    }
    
    inline Real draw_getpixel(Real x, Real y)
    {
        return call(functions[405], x, y);
    }
    
    inline void screen_save(String fname)
    {
        call(functions[406], fname);
    }
    
    inline void screen_save_part(String fname, Real x, Real y, Real w, Real h)
    {
        call(functions[407], fname, x, y, w, h);
    }
    
}
#endif
