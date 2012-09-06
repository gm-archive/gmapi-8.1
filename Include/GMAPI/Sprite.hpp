#ifndef GMAPI_SPRITE_HPP
#define GMAPI_SPRITE_HPP
#include "Dll.hpp"
namespace gm
{
    
    /**@addtogroup resources*/
    ///@{
    struct Texture;
    /**@brief A GM sprite object.*/
    struct Sprite
    {
        int u00; //54 29 62 00
        /**Number of sub images.*/
        int number;
        struct Size
        {
            int u00;
            int width;
            int height;
            //...
        };
        Size **size;
        int xoffset;
        int yoffset;
        int bbox_left;
        int bbox_top;
        int bbox_right;
        int bbox_bottom;
        int u24; //18 15 5b 02
        int u28; //0
        /**Array of texture ids, one for each sub image.*/
        int *tex_ids;
        //more?
    };
    class DelphiString;
    struct Sprites
    {
        Sprite **sprites;
        DelphiString *names;
        int count;

        Sprite *get(int sprid)
        {
            if (sprid < 0 || sprid >= count)
                return 0;
            else return sprites[sprid];
        }
    };
    GMAPI_DLL extern Sprites *sprites;
    ///@}

}
#endif
