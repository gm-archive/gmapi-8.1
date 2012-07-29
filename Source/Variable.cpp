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

#include "Precompiled.hpp"
#include "Functions/dll.hpp"
namespace gm
{
    const void *gmGetVar = 0;
    const void *gmGetVarId = 0;

    bool initVariables()
    {
        //Locate some internal functions out of the variable_local_get code
        static const unsigned REF_START = 0x0064B560;
        static const unsigned REF_VARID = 0x0064B587 + 1;
        static const unsigned REF_VARGET = 0x0064B596 + 1;
        
        static const unsigned char BEFORE_VARID[] = {0x8B,0x45,0xFC,   0xE8};
        static const unsigned  char AFTER_VARID[]  = {0x8B,0x55,0x08,   0x52,   0x33,0xC9,   0x8B,0xD0,   0x8B,0xC3,   0xE8};
        static const unsigned  char AFTER_GETVAR[] = {0x33,0xC0,   0x5A,   0x59,   0x59,   0x64,0x89,0x10};
        static const size_t BEFORE_VARID_LEN = sizeof(BEFORE_VARID);
        static const size_t AFTER_VARID_LEN  = sizeof(AFTER_VARID);
        static const size_t AFTER_GETVAR_LEN = sizeof(AFTER_GETVAR);

        static const unsigned VARID_OFFSET = REF_VARID - REF_START;
        static const unsigned VARGET_OFFSET = REF_VARGET - REF_START;
        unsigned  char *p = (unsigned  char*)(unsigned)gm::get_function_address("variable_local_get").real;

        if (memcmp(p+VARID_OFFSET-BEFORE_VARID_LEN, BEFORE_VARID, BEFORE_VARID_LEN) != 0)
            return false;
        if (memcmp(p+VARID_OFFSET+4, AFTER_VARID, AFTER_VARID_LEN) != 0)
            return false;
        if (memcmp(p+VARGET_OFFSET+4, AFTER_GETVAR, AFTER_GETVAR_LEN) != 0)
            return false;
        
        //                  next instruction address  + relative call
        gmGetVarId = (void*)(((int)p+VARID_OFFSET +4) + *((int*)(p+VARID_OFFSET )));
        gmGetVar   = (void*)(((int)p+VARGET_OFFSET+4) + *((int*)(p+VARGET_OFFSET)));
        
        return true;
    }
}
