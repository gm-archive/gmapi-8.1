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
#ifndef GMAPI_FUNCTIONS_GRAPHICS_DRAW_TEXT_HPP
#define GMAPI_FUNCTIONS_GRAPHICS_DRAW_TEXT_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    inline void draw_set_font(Real font)
    {
        call(functions[418], font);
    }
    
    inline void draw_set_halign(Real halign)
    {
        call(functions[419], halign);
    }
    
    inline void draw_set_valign(Real valign)
    {
        call(functions[420], valign);
    }
    
    inline void draw_text(Real x, Real y, String string)
    {
        call(functions[421], x, y, string);
    }
    
    inline void draw_text_ext(Real x, Real y, String string, Real sep, Real w)
    {
        call(functions[422], x, y, string, sep, w);
    }
    
    inline Real string_width(String string)
    {
        return call(functions[423], string);
    }
    
    inline Real string_height(String string)
    {
        return call(functions[424], string);
    }
    
    inline Real string_width_ext(String string, Real sep, Real w)
    {
        return call(functions[425], string, sep, w);
    }
    
    inline Real string_height_ext(String string, Real sep, Real w)
    {
        return call(functions[426], string, sep, w);
    }
    
    inline void draw_text_transformed(Real x, Real y, String string, Real xscale, Real yscale, Real angle)
    {
        call(functions[427], x, y, string, xscale, yscale, angle);
    }
    
    inline void draw_text_ext_transformed(Real x, Real y, String string, Real sep, Real w, Real xscale, Real yscale, Real angle)
    {
        call(functions[428], x, y, string, sep, w, xscale, yscale, angle);
    }
    
    inline void draw_text_color(Real x, Real y, String string, Real c1, Real c2, Real c3, Real c4, Real alpha)
    {
        call(functions[429], x, y, string, c1, c2, c3, c4, alpha);
    }
    
    inline void draw_text_ext_color(Real x, Real y, String string, Real sep, Real w, Real c1, Real c2, Real c3, Real c4, Real alpha)
    {
        call(functions[430], x, y, string, sep, w, c1, c2, c3, c4, alpha);
    }
    
    inline void draw_text_transformed_color(Real x, Real y, String string, Real xscale, Real yscale, Real angle, Real c1, Real c2, Real c3, Real c4, Real alpha)
    {
        call(functions[431], x, y, string, xscale, yscale, angle, c1, c2, c3, c4, alpha);
    }
    
    inline void draw_text_ext_transformed_color(Real x, Real y, String string, Real sep, Real w, Real xscale, Real yscale, Real angle, Real c1, Real c2, Real c3, Real c4, Real alpha)
    {
        call(functions[432], x, y, string, sep, w, xscale, yscale, angle, c1, c2, c3, c4, alpha);
    }
    
}
#endif
