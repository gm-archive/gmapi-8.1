#include "GMAPI.hpp"
#include "GMAPI/D3d.hpp"
#define EXPORT extern "C" __declspec(dllexport)

gm::ValueString retstr;
EXPORT double test_(double rgb)
{
    return gm::d3dDev->Clear(0,0,D3DCLEAR_TARGET, (unsigned)rgb, 0, 0);
}

EXPORT double test_sprite_exists(double ind)
{
    return ind >= 0 && ind < gm::sprites->count;
}
EXPORT const char* test_sprite_get_name(double ind)
{
    retstr = gm::sprites->names[(int)ind];
    return retstr.getData();
}
EXPORT double test_sprite_get_number(double ind)
{
    return gm::sprites->sprites[(int)ind]->number;
}
EXPORT double test_sprite_get_width(double ind)
{
    return (*gm::sprites->sprites[(int)ind]->size)->width;
}
EXPORT double test_sprite_get_height(double ind)
{
    return (*gm::sprites->sprites[(int)ind]->size)->height;
}
EXPORT double test_sprite_get_xoffset(double ind)
{
    return gm::sprites->sprites[(int)ind]->xoffset;
}
EXPORT double test_sprite_get_yoffset(double ind)
{
    return gm::sprites->sprites[(int)ind]->yoffset;
}
EXPORT double test_sprite_get_bbox_left(double ind)
{
    return gm::sprites->sprites[(int)ind]->bbox_left;
}
EXPORT double test_sprite_get_bbox_right(double ind)
{
    return gm::sprites->sprites[(int)ind]->bbox_right;
}
EXPORT double test_sprite_get_bbox_top(double ind)
{
    return gm::sprites->sprites[(int)ind]->bbox_top;
}
EXPORT double test_sprite_get_bbox_bottom(double ind)
{
    return gm::sprites->sprites[(int)ind]->bbox_bottom;
}
