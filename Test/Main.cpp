#include "GMAPI.hpp"
#define EXPORT extern "C" __declspec(dllexport)
EXPORT double test_init(double get_function_address)
{
    
    if(gm::init(get_function_address))
    {
        gm::show_message(
            gm::string_replace(
            "x10 test message!",
            "x10",
            "GM API"));
        return true;
    }
    else return false;
}
EXPORT double test_shutdown()
{
    gm::shutdown();
    return 0;
}
EXPORT double test_foo()
{
    return 0;
}
