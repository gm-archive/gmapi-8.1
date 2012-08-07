#include "GMAPI.hpp"
#define EXPORT extern "C" __declspec(dllexport)

EXPORT double var_get_local(gm::RefString name)
{
    return gm::getSelf()->vars->getVal(gm::getVarId(name));
}
EXPORT double var_get_global(gm::RefString name)
{
    return gm::userGlobals->getVal(gm::getVarId(name));
}
EXPORT double var_get_local_array(gm::RefString name, double i)
{
    return gm::getSelf()->vars->getVal(gm::getVarId(name), (int)i);
}
EXPORT double var_get_local_array2d(gm::RefString name, double row, double col)
{
    return gm::getSelf()->vars->getVal(gm::getVarId(name), (int)col, (int)row);
}
