#include "GMAPI.hpp"
#include <Windows.h>
#define EXPORT extern "C" __declspec(dllexport)


EXPORT double test_init(double get_function_address)
{
    if(gm::init(get_function_address)   )
    {
        /*gm::show_message(
            gm::string_replace(
            "x10 test message!",
            "x10",
            "GM API"));*/
        return true;
    }
    else return false;
}
EXPORT double test_shutdown()
{
    gm::shutdown();
    return 1;
}
EXPORT double test_is_real()
{
    return gm::is_real(5);
}
EXPORT double test_is_real2()
{
    return gm::is_real("Not real");
}
EXPORT double test_is_string()
{
    return gm::is_string(5);
}
EXPORT double test_is_string2()
{
    return gm::is_string("Not real");
}

