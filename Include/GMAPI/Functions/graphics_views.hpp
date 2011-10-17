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
#ifndef GMAPI_FUNCTIONS_GRAPHICS_VIEWS_HPP
#define GMAPI_FUNCTIONS_GRAPHICS_VIEWS_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline void window_set_region_size(Real w, Real h, Real adaptwindow)
    {
        call(functions[491], w, h, adaptwindow);
    }
    
    inline Real window_get_region_width()
    {
        return call(functions[492]);
    }
    
    inline Real window_get_region_height()
    {
        return call(functions[493]);
    }
    
    inline Real window_view_mouse_get_x(Real id)
    {
        return call(functions[494], id);
    }
    
    inline Real window_view_mouse_get_y(Real id)
    {
        return call(functions[495], id);
    }
    
    inline void window_view_mouse_set(Real id, Real x, Real y)
    {
        call(functions[496], id, x, y);
    }
    
    inline Real window_views_mouse_get_x()
    {
        return call(functions[497]);
    }
    
    inline Real window_views_mouse_get_y()
    {
        return call(functions[498]);
    }
    
    inline void window_views_mouse_set(Real x, Real y)
    {
        call(functions[499], x, y);
    }
    
    ///@}
}
#endif
