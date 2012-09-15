#include "GMAPI.hpp"
#define EXPORT extern "C" __declspec(dllexport)

static gm::ValueString retstr;
EXPORT double test_texture_exists(double ind)
{
    return gm::textureExists((int)ind);
}
EXPORT double test_texture_get_image_width(double ind)
{
    return gm::getTexture((int)ind).imageWidth;
}
EXPORT double test_texture_get_image_height(double ind)
{
    return gm::getTexture((int)ind).imageHeight;
}
EXPORT double test_texture_get_width(double ind)
{
    return gm::getTexture((int)ind).width;
}
EXPORT double test_texture_get_height(double ind)
{
    return gm::getTexture((int)ind).height;
}
EXPORT double test_texture_get_d3d(double ind)
{
    return (unsigned)gm::getTexture((int)ind).d3dTex;
}
