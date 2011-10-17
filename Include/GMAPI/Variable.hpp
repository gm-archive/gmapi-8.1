#ifndef GMAPI_VARIABLE_HPP
#define GMAPI_VARIABLE_HPP
#include "Value.hpp"
namespace gm
{
    /**@addtogroup gm_variables*/
    ///@{
    /**
     * Total size: 40 (0x28) Bytes 
     */
    struct Variable
    {
        /**The variables symbol id.*/
        int id;
        char padd04[4];
        //0x18 bytes
        /**The variables value.*/
        Value value;
        char padd20[4];
        char padd24[4];
    };
    struct VariablesList
    {
        Variable *variables;
    };
    ///@}
}
#endif
