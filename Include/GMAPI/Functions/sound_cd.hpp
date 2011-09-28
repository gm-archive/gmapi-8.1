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
#ifndef GMAPI_FUNCTIONS_SOUND_CD_HPP
#define GMAPI_FUNCTIONS_SOUND_CD_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    inline void cd_init()
    {
        call(functions[736]);
    }
    
    inline Real cd_present()
    {
        return call(functions[737]);
    }
    
    inline Real cd_number()
    {
        return call(functions[738]);
    }
    
    inline Real cd_playing()
    {
        return call(functions[739]);
    }
    
    inline Real cd_paused()
    {
        return call(functions[740]);
    }
    
    inline Real cd_track()
    {
        return call(functions[741]);
    }
    
    inline Real cd_length()
    {
        return call(functions[742]);
    }
    
    inline Real cd_track_length(Real n)
    {
        return call(functions[743], n);
    }
    
    inline Real cd_position()
    {
        return call(functions[744]);
    }
    
    inline Real cd_track_position()
    {
        return call(functions[745]);
    }
    
    inline void cd_play(Real first, Real last)
    {
        call(functions[746], first, last);
    }
    
    inline void cd_stop()
    {
        call(functions[747]);
    }
    
    inline void cd_pause()
    {
        call(functions[748]);
    }
    
    inline void cd_resume()
    {
        call(functions[749]);
    }
    
    inline void cd_set_position(Real pos)
    {
        call(functions[750], pos);
    }
    
    inline void cd_set_track_position(Real pos)
    {
        call(functions[751], pos);
    }
    
    inline void cd_open_door()
    {
        call(functions[752]);
    }
    
    inline void cd_close_door()
    {
        call(functions[753]);
    }
    
    inline void MCI_command(String str)
    {
        call(functions[754], str);
    }
    
}
#endif
