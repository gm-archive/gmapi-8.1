#ifndef GMAPI_VARIABLE_HPP
#define GMAPI_VARIABLE_HPP
#include "Value.hpp"
namespace gm
{
    /**
     * Total size: 40 (0x28) Bytes 
     */
    struct Variable
    {
        int id;
        char padd04[4];
        //0x18 bytes
        Value value;
        char padd20[4];
        char padd24[4];
    };
    struct VariablesList
    {
        Variable *variables;
    };
}
#endif
