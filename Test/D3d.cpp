#include "GMAPI.hpp"
#include "GMAPI/D3d.hpp"
#define EXPORT extern "C" __declspec(dllexport)

EXPORT double d3d_clear(double rgb)
{
    return gm::d3dDev->Clear(0,0,D3DCLEAR_TARGET, (unsigned)rgb, 0, 0);
}
