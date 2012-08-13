#include "Precompiled.hpp"
#include "Texture.hpp"
#include "Functions/dll.hpp"
namespace gm
{
    GMAPI_DLL int *texturesCount;
    GMAPI_DLL Texture **textures;

    bool initTextures()
    {
        //Locate some internal data out of the texture_get_width code
        static const unsigned REF_F1_START = 0x005FEB7C;
        static const unsigned REF_F1_CALL_F2 = 0x005FEB92 + 1;

        static const unsigned REF_F2_START = 0x006211DC;
        static const unsigned REF_F2_CALL_F3 = 0x006211F1 + 1;

        static const unsigned REF_F3_START = 0x00620FF8;
        static const unsigned REF_F3_TEXTURECNT = 0x00620FFC + 2;
        static const unsigned REF_F3_TEXTURES = 0x00621007 + 2;

        static const unsigned char BEFORE_F1_CALL_F2[] = {0xE8};
        static const unsigned char AFTER_F1_CALL_F2[] = {0xDD,0x5B,0x08,   0x9B,   0x5B,   0x5D,   0xC2,0x0C,0x00};

        static const unsigned char BEFORE_F2_CALL_F3[] = {0x53,   0x83,0xC4,0xF8,   0x8B,0xD8,   0x33,0xC0,   0x89,0x04,0x24,   0xC7,0x44,0x24,0x04,0x00,0x00,0xF0,0x3F,   0x8B,0xC3,   0xE8};
        static const unsigned char AFTER_F2_CALL_F3[] = {0x84,0xC0,   0x74,0x1D,   0x8D,0x04,0x5B,   0x8B,0x15};

        static const unsigned char BEFORE_F3_TEXTURECNT[] = {0x85,0xC0,   0x7C,0x18,   0x3B,0x05};
        static const unsigned char BEFORE_F3_TEXTURES[] = {0x7D,0x10,   0x8D,0x04,0x40,   0x8B,0x15};
        static const unsigned char AFTER_F3_TEXTURES[] = {0x80,0x7C,0xC2,0x14,0x00,   0x75,0x03,   0x33,0xC0,   0xC3,   0xB0,0x01,   0xC3};

        static const size_t BEFORE_F1_CALL_F2_LEN = sizeof(BEFORE_F1_CALL_F2);
        static const size_t AFTER_F1_CALL_F2_LEN = sizeof(AFTER_F1_CALL_F2);
        static const size_t BEFORE_F2_CALL_F3_LEN = sizeof(BEFORE_F2_CALL_F3);
        static const size_t AFTER_F2_CALL_F3_LEN = sizeof(AFTER_F2_CALL_F3);
        static const size_t BEFORE_F3_TEXTURECNT_LEN = sizeof(BEFORE_F3_TEXTURECNT);
        static const size_t BEFORE_F3_TEXTURES_LEN = sizeof(BEFORE_F3_TEXTURES);
        static const size_t AFTER_F3_TEXTURES_LEN = sizeof(AFTER_F3_TEXTURES);

        static const unsigned F1_CALL_F2_OFFSET = REF_F1_CALL_F2 - REF_F1_START;
        static const unsigned F2_CALL_F3_OFFSET = REF_F2_CALL_F3 - REF_F2_START;
        static const unsigned F3_TEXTURECNT_OFFSET = REF_F3_TEXTURECNT - REF_F3_START;
        static const unsigned F3_TEXTURES_OFFSET = REF_F3_TEXTURES - REF_F3_START;

        unsigned char *p = (unsigned char*)(unsigned)gm::get_function_address("texture_get_width").real;

        if (memcmp(
            p+F1_CALL_F2_OFFSET-BEFORE_F1_CALL_F2_LEN,
            BEFORE_F1_CALL_F2,
            BEFORE_F1_CALL_F2_LEN) != 0)
            return false;
        if (memcmp(
            p+F1_CALL_F2_OFFSET+4,
            AFTER_F1_CALL_F2,
            AFTER_F1_CALL_F2_LEN) != 0)
            return false;

        p = (unsigned char*)(((int)p+F1_CALL_F2_OFFSET + 4) + *((int*)(p+F1_CALL_F2_OFFSET)));

        if (memcmp(
            p+F2_CALL_F3_OFFSET-BEFORE_F2_CALL_F3_LEN,
            BEFORE_F2_CALL_F3,
            BEFORE_F2_CALL_F3_LEN) != 0)
            return false;
        if (memcmp(
            p+F2_CALL_F3_OFFSET+4,
            AFTER_F2_CALL_F3,
            AFTER_F2_CALL_F3_LEN) != 0)
            return false;

        p = (unsigned char*)(((int)p+F2_CALL_F3_OFFSET + 4) + *((int*)(p+F2_CALL_F3_OFFSET)));

        if (memcmp(
            p+F3_TEXTURECNT_OFFSET-BEFORE_F3_TEXTURECNT_LEN,
            BEFORE_F3_TEXTURECNT,
            BEFORE_F3_TEXTURECNT_LEN) != 0)
            return false;
        if (memcmp(
            p+F3_TEXTURES_OFFSET-BEFORE_F3_TEXTURES_LEN,
            BEFORE_F3_TEXTURES,
            BEFORE_F3_TEXTURES_LEN) != 0)
            return false;
        if (memcmp(
            p+F3_TEXTURES_OFFSET+4,
            AFTER_F3_TEXTURES,
            AFTER_F3_TEXTURES_LEN) != 0)
            return false;

        texturesCount = *(int **)(p + F3_TEXTURECNT_OFFSET);
        textures = *(Texture ***)(p + F3_TEXTURES_OFFSET);

        return true;
    }
}
