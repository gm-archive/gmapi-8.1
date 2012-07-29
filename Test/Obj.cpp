#include "GMAPI.hpp"
#define EXPORT extern "C" __declspec(dllexport)

EXPORT double obj_get_selfid()
{
    int r = gm::getSelf()->id;
    return r;
}
EXPORT double obj_get_otherid()
{
    int r = gm::getOther()->id;
    return r;
}

EXPORT double obj_get_image_index()
{
    return gm::getSelf()->image_index;
}
EXPORT double obj_get_image_speed()
{
    return gm::getSelf()->image_speed;
}
EXPORT double obj_get_image_xscale()
{
    return gm::getSelf()->image_xscale;
}
EXPORT double obj_get_image_yscale()
{
    return gm::getSelf()->image_yscale;
}
EXPORT double obj_get_image_angle()
{
    return gm::getSelf()->image_angle;
}
EXPORT double obj_get_image_alpha()
{
    return gm::getSelf()->image_alpha;
}
EXPORT double obj_get_x()
{
    return gm::getSelf()->x;
}
EXPORT double obj_get_y()
{
    return gm::getSelf()->y;
}
EXPORT double obj_get_xstart()
{
    return gm::getSelf()->xstart;
}
EXPORT double obj_get_ystart()
{
    return gm::getSelf()->ystart;
}
EXPORT double obj_get_xprevious()
{
    return gm::getSelf()->xprevious;
}
EXPORT double obj_get_yprevious()
{
    return gm::getSelf()->yprevious;
}
EXPORT double obj_get_direction()
{
    return gm::getSelf()->direction;
}
EXPORT double obj_get_speed()
{
    return gm::getSelf()->speed;
}
EXPORT double obj_get_friction()
{
    return gm::getSelf()->friction;
}
EXPORT double obj_get_gravity_direction()
{
    return gm::getSelf()->gravity_direction;
}
EXPORT double obj_get_gravity()
{
    return gm::getSelf()->gravity;
}
EXPORT double obj_get_solid()
{
    return gm::getSelf()->solid;
}
EXPORT double obj_get_persistent()
{
    return gm::getSelf()->persistent;
}
EXPORT double obj_get_object_index()
{
    return gm::getSelf()->object_index;
}
EXPORT double obj_get_alarm0()
{
    return gm::getSelf()->alarm[0];
}
EXPORT double obj_get_alarm1()
{
    return gm::getSelf()->alarm[1];
}
EXPORT double obj_get_alarm2()
{
    return gm::getSelf()->alarm[2];
}
EXPORT double obj_get_alarm3()
{
    return gm::getSelf()->alarm[3];
}
EXPORT double obj_get_alarm4()
{
    return gm::getSelf()->alarm[4];
}
EXPORT double obj_get_alarm5()
{
    return gm::getSelf()->alarm[5];
}
EXPORT double obj_get_alarm6()
{
    return gm::getSelf()->alarm[6];
}
EXPORT double obj_get_alarm7()
{
    return gm::getSelf()->alarm[7];
}
EXPORT double obj_get_alarm8()
{
    return gm::getSelf()->alarm[8];
}
EXPORT double obj_get_alarm9()
{
    return gm::getSelf()->alarm[9];
}
EXPORT double obj_get_alarm10()
{
    return gm::getSelf()->alarm[10];
}
EXPORT double obj_get_alarm11()
{
    return gm::getSelf()->alarm[11];
}
EXPORT double obj_get_path_speed()
{
    return gm::getSelf()->path_speed;
}
EXPORT double obj_get_path_orientation()
{
    return gm::getSelf()->path_orientation;
}
EXPORT double obj_get_path_scale()
{
    return gm::getSelf()->path_scale;
}
EXPORT double obj_get_timeline_position()
{
    return gm::getSelf()->timeline_position;
}
EXPORT double obj_get_timeline_speed()
{
    return gm::getSelf()->timeline_speed;
}
