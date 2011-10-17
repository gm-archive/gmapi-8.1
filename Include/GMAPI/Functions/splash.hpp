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
#ifndef GMAPI_FUNCTIONS_SPLASH_HPP
#define GMAPI_FUNCTIONS_SPLASH_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline void splash_show_video(String fname, Real loop)
    {
        call(functions[843], fname, loop);
    }
    
    inline void splash_show_text(String fname, Real delay)
    {
        call(functions[844], fname, delay);
    }
    
    inline void splash_show_image(String fname, Real delay)
    {
        call(functions[845], fname, delay);
    }
    
    inline void splash_show_web(String url, Real delay)
    {
        call(functions[846], url, delay);
    }
    
    inline void splash_set_main(Real main)
    {
        call(functions[847], main);
    }
    
    inline void splash_set_scale(Real scale)
    {
        call(functions[848], scale);
    }
    
    inline void splash_set_cursor(Real vis)
    {
        call(functions[849], vis);
    }
    
    inline void splash_set_color(Real col)
    {
        call(functions[850], col);
    }
    
    inline void splash_set_caption(String cap)
    {
        call(functions[851], cap);
    }
    
    inline void splash_set_fullscreen(Real full)
    {
        call(functions[852], full);
    }
    
    inline void splash_set_border(Real border)
    {
        call(functions[853], border);
    }
    
    inline void splash_set_size(Real w, Real h)
    {
        call(functions[854], w, h);
    }
    
    inline void splash_set_position(Real x, Real y)
    {
        call(functions[855], x, y);
    }
    
    inline void splash_set_adapt(Real adapt)
    {
        call(functions[856], adapt);
    }
    
    inline void splash_set_top(Real top)
    {
        call(functions[857], top);
    }
    
    inline void splash_set_interrupt(Real interrupt)
    {
        call(functions[858], interrupt);
    }
    
    inline void splash_set_stop_key(Real stop)
    {
        call(functions[859], stop);
    }
    
    inline void splash_set_stop_mouse(Real stop)
    {
        call(functions[860], stop);
    }
    
    inline void splash_set_close_button(Real show)
    {
        call(functions[861], show);
    }
    
    inline void show_info()
    {
        call(functions[862]);
    }
    
    inline void load_info(String fname)
    {
        call(functions[863], fname);
    }
    
    ///@}
}
#endif
