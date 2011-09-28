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
#ifndef GMAPI_FUNCTIONS_RESOURCES_TIMELINES_HPP
#define GMAPI_FUNCTIONS_RESOURCES_TIMELINES_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    inline Real timeline_exists(Real ind)
    {
        return call(functions[714], ind);
    }
    
    inline String timeline_get_name(Real ind)
    {
        return call(functions[715], ind);
    }
    
    inline Real timeline_add()
    {
        return call(functions[716]);
    }
    
    inline void timeline_delete(Real ind)
    {
        call(functions[717], ind);
    }
    
    inline void timeline_clear(Real ind)
    {
        call(functions[718], ind);
    }
    
    inline void timeline_moment_add(Real ind, Real step, String codestr)
    {
        call(functions[719], ind, step, codestr);
    }
    
    inline void timeline_moment_clear(Real ind, Real step)
    {
        call(functions[720], ind, step);
    }
    
}
#endif
