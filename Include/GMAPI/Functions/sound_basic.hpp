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
#ifndef GMAPI_FUNCTIONS_SOUND_BASIC_HPP
#define GMAPI_FUNCTIONS_SOUND_BASIC_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline void sound_play(Real index)
    {
        call(functions[725], index);
    }
    
    inline void sound_loop(Real index)
    {
        call(functions[726], index);
    }
    
    inline void sound_stop(Real index)
    {
        call(functions[727], index);
    }
    
    inline void sound_stop_all()
    {
        call(functions[728]);
    }
    
    inline Real sound_isplaying(Real index)
    {
        return call(functions[729], index);
    }
    
    inline void sound_volume(Real index, Real value)
    {
        call(functions[730], index, value);
    }
    
    inline void sound_global_volume(Real value)
    {
        call(functions[731], value);
    }
    
    inline void sound_fade(Real index, Real value, Real time)
    {
        call(functions[732], index, value, time);
    }
    
    inline void sound_pan(Real index, Real value)
    {
        call(functions[733], index, value);
    }
    
    inline void sound_background_tempo(Real factor)
    {
        call(functions[734], factor);
    }
    
    inline void sound_set_search_directory(String dir)
    {
        call(functions[735], dir);
    }
    
    ///@}
}
#endif
