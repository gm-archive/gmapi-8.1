#ifndef GMAPI_TEXTURE_HPP
#define GMAPI_TEXTURE_HPP
#include "Dll.hpp"
#include "D3d.hpp"
namespace gm
{

    /**@addtogroup resources*/
    ///@{
    struct Texture
    {
        IDirect3DTexture8 *d3dTex;
        int imageWidth;
        int imageHeight;
        int width;
        int height;
        int u20;
    };
    ///@}
    GMAPI_DLL extern int *texturesCount;
    GMAPI_DLL extern Texture **textures;
    inline bool textureExists(int texid)
    {
        return texid >= 0 && texid < *texturesCount;
    }
    inline Texture& getTexture(int texid)
    {
        return (*textures)[texid];
    }
}
#endif
