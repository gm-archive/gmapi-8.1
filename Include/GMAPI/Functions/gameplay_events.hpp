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
#ifndef GMAPI_FUNCTIONS_GAMEPLAY_EVENTS_HPP
#define GMAPI_FUNCTIONS_GAMEPLAY_EVENTS_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline void event_perform(Real type, Real numb)
    {
        call(functions[242], type, numb);
    }
    
    inline void event_perform_object(Real obj, Real type, Real numb)
    {
        call(functions[243], obj, type, numb);
    }
    
    inline void event_user(Real numb)
    {
        call(functions[244], numb);
    }
    
    inline void event_inherited()
    {
        call(functions[245]);
    }
    
    ///@}
}
#endif
