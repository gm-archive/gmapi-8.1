#include "GMAPI.hpp"
#define EXPORT extern "C" __declspec(dllexport)

EXPORT double ia_get_instance_count()
{
    return gm::instanceArray->getCount();
}
EXPORT double ia_get_firstid()
{
    return gm::instanceArray->getIndex(0)->id;
}
EXPORT double ia_get_findself()
{
    gm::Value val = gm::variable_local_get("anothervar");
    return gm::instanceArray->get(gm::getSelf()->id)->id;
}
