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
#ifndef GMAPI_FUNCTIONS_RESOURCES_SOUNDS_HPP
#define GMAPI_FUNCTIONS_RESOURCES_SOUNDS_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline Real sound_exists(Real ind)
    {
        return call(functions[677], ind);
    }
    
    inline String sound_get_name(Real ind)
    {
        return call(functions[678], ind);
    }
    
    inline Real sound_get_kind(Real ind)
    {
        return call(functions[679], ind);
    }
    
    inline Real sound_get_preload(Real ind)
    {
        return call(functions[680], ind);
    }
    
    inline void sound_discard(Real index)
    {
        call(functions[681], index);
    }
    
    inline void sound_restore(Real index)
    {
        call(functions[682], index);
    }
    
    inline Real sound_add(String fname, Real kind, Real preload)
    {
        return call(functions[683], fname, kind, preload);
    }
    
    inline void sound_replace(Real index, String fname, Real kind, Real preload)
    {
        call(functions[684], index, fname, kind, preload);
    }
    
    inline void sound_delete(Real index)
    {
        call(functions[685], index);
    }
    
    ///@}
}
#endif
