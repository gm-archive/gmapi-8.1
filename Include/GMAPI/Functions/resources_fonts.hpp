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
#ifndef GMAPI_FUNCTIONS_RESOURCES_FONTS_HPP
#define GMAPI_FUNCTIONS_RESOURCES_FONTS_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    inline Real font_exists(Real ind)
    {
        return call(functions[587], ind);
    }
    
    inline String font_get_name(Real ind)
    {
        return call(functions[588], ind);
    }
    
    inline String font_get_fontname(Real ind)
    {
        return call(functions[589], ind);
    }
    
    inline Real font_get_bold(Real ind)
    {
        return call(functions[590], ind);
    }
    
    inline Real font_get_italic(Real ind)
    {
        return call(functions[591], ind);
    }
    
    inline Real font_get_first(Real ind)
    {
        return call(functions[592], ind);
    }
    
    inline Real font_get_last(Real ind)
    {
        return call(functions[593], ind);
    }
    
    inline Real font_add(String name, Real size, Real bold, Real italic, Real first, Real last)
    {
        return call(functions[594], name, size, bold, italic, first, last);
    }
    
    inline Real font_add_sprite(Real spr, Real first, Real prop, Real sep)
    {
        return call(functions[595], spr, first, prop, sep);
    }
    
    inline void font_replace(Real ind, String name, Real size, Real bold, Real italic, Real first, Real last)
    {
        call(functions[596], ind, name, size, bold, italic, first, last);
    }
    
    inline void font_replace_sprite(Real ind, Real spr, Real first, Real prop, Real sep)
    {
        call(functions[597], ind, spr, first, prop, sep);
    }
    
    inline void font_delete(Real ind)
    {
        call(functions[598], ind);
    }
    
}
#endif
