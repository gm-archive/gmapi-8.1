/* Copyright (c) 2011-2012 William Newbery
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
#ifndef GMAPI_VARIABLE_HPP
#define GMAPI_VARIABLE_HPP
#include "Value.hpp"
namespace gm
{
    /**@addtogroup gm_variables*/
    ///@{
    /**
     * Total size: 40 (0x28) Bytes 
     */
    struct Variable
    {
        /**The variables symbol id.*/
        int id;
        char padd04[4];
        //0x18 bytes
        /**The variables value.*/
        Value val;
        char padd20[4];
        char padd24[4];
    };

    /**@brief Array container for gm::Variable objects.*/
    struct Variables
    {
        int unknown;
        Variable *vars;
        int len;
    };

    GMAPI_DLL void getVar(Instance *self, int varid, int unknown, Value *out);
    GMAPI_DLL int getVarId(const wchar_t *delphiStringU16);
    ///@}
}
#endif
