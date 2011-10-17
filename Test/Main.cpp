#include "GMAPI.hpp"
#define EXPORT extern "C" __declspec(dllexport)
EXPORT double test_init(double get_function_address)
{
    
    if(gm::init(get_function_address))
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
    return 0;
}

#include <fstream>
#include <Windows.h>
EXPORT double test_foo()
{
    gm::Instance *self = gm::getSelf();
    gm::Instance *other = gm::getOther();
    gm::Value val = gm::variable_local_get("x");
    //100001
    gm::Value a = gm::variable_local_exists("my_var");
    
    std::ofstream os("mem.bin", std::ios::trunc | std::ios::binary);
    char *start = (char*)0x02000000;
    char *end   = (char*)0x03000000;
    MEMORY_BASIC_INFORMATION info;
    for(char *p = start; p < end;)
    {
        VirtualQueryEx(GetCurrentProcess(), p,&info,sizeof(info));
        char *regionstart = (char*)info.BaseAddress;
        char *regionend = regionstart + info.RegionSize;
        
        if(regionstart < p)regionstart = p;
        if(regionend > end)regionend   = end;
        p = regionend;
        
        if(info.State == MEM_COMMIT && (info.Protect & PAGE_GUARD) == 0)
        {
            os.write(regionstart, regionend-regionstart);
        }
        else
        {
            for(char *q = regionstart; q < regionend; ++q)
                os.put(0);
        }
    }
    return 0;
}
