#ifndef GMAPI_TEXTURE_HPP
#define GMAPI_TEXTURE_HPP
#include "Dll.hpp"
#ifndef GMAPI_NO_D3D
    #include <d3d8.h>
#endif
namespace gm
{

    /**@addtogroup resources*/
    ///@{
    struct Texture
    {
#ifndef GMAPI_NO_D3D
        IDirect3DTexture8 *d3dTex;
#else
        void *d3dTex;
#endif
        int imageWidth;
        int imageHeight;
        int width;
        int height;
        int u20;
    };
    ///@}
    GMAPI_DLL extern int *texturesCount;
    GMAPI_DLL extern Texture **textures;
    inline Texture *getTexture(int texid)
    {
        if (texid < 0 || texid >= *texturesCount)
            return 0;
        else return textures[texid];
    }
}
#endif
