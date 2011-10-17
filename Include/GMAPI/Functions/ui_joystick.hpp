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
#ifndef GMAPI_FUNCTIONS_UI_JOYSTICK_HPP
#define GMAPI_FUNCTIONS_UI_JOYSTICK_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline Real joystick_exists(Real id)
    {
        return call(functions[786], id);
    }
    
    inline String joystick_name(Real id)
    {
        return call(functions[787], id);
    }
    
    inline Real joystick_axes(Real id)
    {
        return call(functions[788], id);
    }
    
    inline Real joystick_buttons(Real id)
    {
        return call(functions[789], id);
    }
    
    inline Real joystick_has_pov(Real id)
    {
        return call(functions[790], id);
    }
    
    inline Real joystick_direction(Real id)
    {
        return call(functions[791], id);
    }
    
    inline Real joystick_check_button(Real id, Real numb)
    {
        return call(functions[792], id, numb);
    }
    
    inline Real joystick_xpos(Real id)
    {
        return call(functions[793], id);
    }
    
    inline Real joystick_ypos(Real id)
    {
        return call(functions[794], id);
    }
    
    inline Real joystick_zpos(Real id)
    {
        return call(functions[795], id);
    }
    
    inline Real joystick_rpos(Real id)
    {
        return call(functions[796], id);
    }
    
    inline Real joystick_upos(Real id)
    {
        return call(functions[797], id);
    }
    
    inline Real joystick_vpos(Real id)
    {
        return call(functions[798], id);
    }
    
    inline Real joystick_pov(Real id)
    {
        return call(functions[799], id);
    }
    
    ///@}
}
#endif
