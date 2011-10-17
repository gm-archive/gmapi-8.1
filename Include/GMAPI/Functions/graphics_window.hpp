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
#ifndef GMAPI_FUNCTIONS_GRAPHICS_WINDOW_HPP
#define GMAPI_FUNCTIONS_GRAPHICS_WINDOW_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline void window_set_visible(Real visible)
    {
        call(functions[500], visible);
    }
    
    inline Real window_get_visible()
    {
        return call(functions[501]);
    }
    
    inline void window_set_fullscreen(Real full)
    {
        call(functions[502], full);
    }
    
    inline Real window_get_fullscreen()
    {
        return call(functions[503]);
    }
    
    inline void window_set_showborder(Real show)
    {
        call(functions[504], show);
    }
    
    inline Real window_get_showborder()
    {
        return call(functions[505]);
    }
    
    inline void window_set_showicons(Real show)
    {
        call(functions[506], show);
    }
    
    inline Real window_get_showicons()
    {
        return call(functions[507]);
    }
    
    inline void window_set_stayontop(Real stay)
    {
        call(functions[508], stay);
    }
    
    inline Real window_get_stayontop()
    {
        return call(functions[509]);
    }
    
    inline void window_set_sizeable(Real sizeable)
    {
        call(functions[510], sizeable);
    }
    
    inline Real window_get_sizeable()
    {
        return call(functions[511]);
    }
    
    inline void window_set_caption(String caption)
    {
        call(functions[512], caption);
    }
    
    inline String window_get_caption()
    {
        return call(functions[513]);
    }
    
    inline void window_set_cursor(Real curs)
    {
        call(functions[514], curs);
    }
    
    inline Real window_get_cursor()
    {
        return call(functions[515]);
    }
    
    inline void window_set_color(Real color)
    {
        call(functions[516], color);
    }
    
    inline Real window_get_color()
    {
        return call(functions[517]);
    }
    
    inline void window_set_region_scale(Real scale, Real adaptwindow)
    {
        call(functions[518], scale, adaptwindow);
    }
    
    inline Real window_get_region_scale()
    {
        return call(functions[519]);
    }
    
    inline void window_set_position(Real x, Real y)
    {
        call(functions[520], x, y);
    }
    
    inline void window_set_size(Real w, Real h)
    {
        call(functions[521], w, h);
    }
    
    inline void window_set_rectangle(Real x, Real y, Real w, Real h)
    {
        call(functions[522], x, y, w, h);
    }
    
    inline void window_center()
    {
        call(functions[523]);
    }
    
    inline void window_default()
    {
        call(functions[524]);
    }
    
    inline Real window_get_x()
    {
        return call(functions[525]);
    }
    
    inline Real window_get_y()
    {
        return call(functions[526]);
    }
    
    inline Real window_get_width()
    {
        return call(functions[527]);
    }
    
    inline Real window_get_height()
    {
        return call(functions[528]);
    }
    
    inline Real window_mouse_get_x()
    {
        return call(functions[529]);
    }
    
    inline Real window_mouse_get_y()
    {
        return call(functions[530]);
    }
    
    inline void window_mouse_set(Real x, Real y)
    {
        call(functions[531], x, y);
    }
    
    ///@}
}
#endif
