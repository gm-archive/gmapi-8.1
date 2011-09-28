/* Copyright (c) 2011 William Newbery
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
#ifndef GMAPI_INSTANCE_HPP
#define GMAPI_INSTANCE_HPP
namespace gm
{
    struct Instance
    {
        char _pad0000[8];
        char _pad0008[8];
        double image_index;
        double image_speed;
        double image_xscale;
        double image_yscale;
        double image_angle;
        double image_alpha;
        char _pad0040[8];
        char _pad0048[8];
        double x;
        double y;
        double xstart;
        double ystart;
        double xprevious;
        double yprevious;
        double direction;
        double speed;
        double friction;
        double gravity_direction;
        double gravity;
        char _pad00A8[8];
        char _pad00B0[8];
        char _pad00B8[8];
        char _pad00C0[8];
        char _pad00C8[8];
        char _pad00D0[4];
        int alarm[12];
        char _pad0104[4];
        char _pad0108[8];
        char _pad0110[8];
        char _pad0118[8];
        double path_speed;
        double path_orientation;
        double path_scale;
        char _pad138[8];
        char _pad140[8];
        char _pad148[8];
        char _pad150[8];
        double timeline_position;
        double timeline_speed;
        //possibly more
    };
    
    GMAPI_DLL Instance *getSelf();
    GMAPI_DLL Instance *getOther();
    GMAPI_DLL void setSelf(Instance *self);
    GMAPI_DLL void setOther(Instance *other);
    
    class PreserveState
    {
    public:
        PreserveState()
        {
            self  = getSelf();
            other = getOther();
        }
        ~PreserveState()
        {
            setSelf(self);
            setOther(other);
        }
    private:
        Instance *self, *other;
    };
}
#endif
