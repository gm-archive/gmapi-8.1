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
#include "Sprite.hpp"
namespace gm
{
    GMAPI_DLL  Sprites *sprites;
    bool initSprites()
    {
        //Locate some internal functions out of the sprite_exists code
        static const unsigned REF_START = 0x0064E388;
        static const unsigned REF_CALL_EXISTS = 0x0064E3A6 + 1;

        static const unsigned REF_EXISTS_START = 0x005798A4;
        static const unsigned REF_EXISTS_SPRITES = 0x005798B0 + 2;
        
        static const unsigned char BEFORE_CALL_EXISTS[] = {0xE8};
        static const unsigned char AFTER_CALL_EXISTS[] = {0x84,0xC0,   0x74,0x0C,   0x33,0xC0,   0x89,0x43,0x08,   0xC7,0x43,0x0C,0x00,0x00,0xF0,0x3F,   0x5B,   0x5D,   0xC2,0x0C,0x00};

        static const unsigned char BEFORE_EXISTS_SPRITES[] = {0x7D,0x0C,   0x8B,0x15};
        static const unsigned char AFTER_EXISTS_SPRITES[] = {0x83,0x3C,0x82,0x00,   0x75,0x03,   0x33,0xC0,   0xC3,   0xB0,0x01,   0xC3};

        static const size_t BEFORE_CALL_EXISTS_LEN = sizeof(BEFORE_CALL_EXISTS);
        static const size_t AFTER_CALL_EXISTS_LEN   = sizeof(AFTER_CALL_EXISTS);
        static const size_t BEFORE_EXISTS_SPRITES_LEN  = sizeof(BEFORE_EXISTS_SPRITES);
        static const size_t AFTER_EXISTS_SPRITES_LEN  = sizeof(AFTER_EXISTS_SPRITES);

        static const unsigned CALL_EXISTS_OFFSET = REF_CALL_EXISTS - REF_START;
        static const unsigned EXISTS_SPRITES_OFFSET = REF_EXISTS_SPRITES - REF_EXISTS_START;

        unsigned char *p = (unsigned char*)(unsigned)gm::get_function_address("sprite_exists").real;

        if (memcmp(
            p+CALL_EXISTS_OFFSET-BEFORE_CALL_EXISTS_LEN,
            BEFORE_CALL_EXISTS,
            BEFORE_CALL_EXISTS_LEN) != 0)
            return false;
        if (memcmp(
            p+CALL_EXISTS_OFFSET+4,
            AFTER_CALL_EXISTS,
            AFTER_CALL_EXISTS_LEN) != 0)
            return false;
        
        p = (unsigned char*)(((int)p+CALL_EXISTS_OFFSET + 4) + *((int*)(p+CALL_EXISTS_OFFSET)));
        
        if (memcmp(
            p+EXISTS_SPRITES_OFFSET-BEFORE_EXISTS_SPRITES_LEN,
            BEFORE_EXISTS_SPRITES,
            BEFORE_EXISTS_SPRITES_LEN) != 0)
            return false;
        if (memcmp(
            p+EXISTS_SPRITES_OFFSET+4,
            AFTER_EXISTS_SPRITES,
            AFTER_EXISTS_SPRITES_LEN) != 0)
            return false;

        sprites = *(Sprites **)(p + EXISTS_SPRITES_OFFSET);
        
        return true;
    }
}
