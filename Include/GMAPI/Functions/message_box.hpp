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
#ifndef GMAPI_FUNCTIONS_MESSAGE_BOX_HPP
#define GMAPI_FUNCTIONS_MESSAGE_BOX_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline void show_message(String str)
    {
        call(functions[545], str);
    }
    
    inline Real show_message_ext(String str, String but1, String but2, String but3)
    {
        return call(functions[546], str, but1, but2, but3);
    }
    
    inline Real show_question(String str)
    {
        return call(functions[547], str);
    }
    
    inline Real get_integer(String str, Real def)
    {
        return call(functions[548], str, def);
    }
    
    inline String get_string(String str, String def)
    {
        return call(functions[549], str, def);
    }
    
    inline void message_background(Real back)
    {
        call(functions[550], back);
    }
    
    inline void message_alpha(Real alpha)
    {
        call(functions[551], alpha);
    }
    
    inline void message_button(Real spr)
    {
        call(functions[552], spr);
    }
    
    inline void message_text_font(String name, Real size, Real color, Real style)
    {
        call(functions[553], name, size, color, style);
    }
    
    inline void message_button_font(String name, Real size, Real color, Real style)
    {
        call(functions[554], name, size, color, style);
    }
    
    inline void message_input_font(String name, Real size, Real color, Real style)
    {
        call(functions[555], name, size, color, style);
    }
    
    inline void message_text_charset(Real type, Real charset)
    {
        call(functions[556], type, charset);
    }
    
    inline void message_mouse_color(Real col)
    {
        call(functions[557], col);
    }
    
    inline void message_input_color(Real col)
    {
        call(functions[558], col);
    }
    
    inline void message_caption(Real show, String str)
    {
        call(functions[559], show, str);
    }
    
    inline void message_position(Real x, Real y)
    {
        call(functions[560], x, y);
    }
    
    inline void message_size(Real w, Real h)
    {
        call(functions[561], w, h);
    }
    
    inline Value show_menu(String str, Value def)
    {
        return call(functions[562], str, def);
    }
    
    inline Value show_menu_pos(Real x, Real y, String str, Value def)
    {
        return call(functions[563], x, y, str, def);
    }
    
    inline Real get_color(Real defcol)
    {
        return call(functions[564], defcol);
    }
    
    inline String get_open_filename(String filter, String fname)
    {
        return call(functions[565], filter, fname);
    }
    
    inline String get_save_filename(String filter, String fname)
    {
        return call(functions[566], filter, fname);
    }
    
    inline String get_directory(String dname)
    {
        return call(functions[567], dname);
    }
    
    inline String get_directory_alt(String capt, String root)
    {
        return call(functions[568], capt, root);
    }
    
    inline void show_error(String str, String abort)
    {
        call(functions[569], str, abort);
    }
    
    ///@}
}
#endif
