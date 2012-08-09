#ifndef GMAPI_TEXTURE_HPP
#define GMAPI_TEXTURE_HPP
#include "Dll.hpp"
namespace gm
{

    /**@addtogroup resources*/
    ///@{
    struct Texture
    {
        int u00;
        int imageWidth;
        int imageHeight;
        int width;
        int height;
        int u20;
    };
    ///@}

}
#endif
