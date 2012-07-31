/* Copyright (c) 2011-2012 William Newbery
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
        Value val;
        int u20;
        char padd24[4];
    };

    /**@brief Array container for gm::Variable objects.
     * 
     * Used for all the user-defined variables, with one per instance and
     * another for global variables. Can not access the built in variables.
     */
    class GMAPI_DLL Variables
    {
    public:
        /**Returns the variable varid if it exists or null otherwise.*/
        Variable *findVar(int varid);
        /**Returns the variable name if it exists or null otherwise.*/
        Variable *findVar(const DelphiString &name);
        
        /**Returns the index of name into the vars array.*/
        int findIndex(const DelphiString &name);
        /**Returns the index of name into the varid array.*/
        int findIndex(int varid);
        /**Returns the variable located at index. Index must be valid.*/
        Variable *getFromIndex(int index);

        /**Get the number of variables stored here.*/
        int getLen(){return len;}
        Variable *getVars(){return vars;}
    private:
        int unknown;
        Variable *vars;
        int len;
    };
    
    
    GMAPI_DLL extern Variables *userGlobals;
    /**Gets the id for a variable name. Works for both built in and user
     * defined, member and global variables,
     * 
     * Does not work for constants.
     * 
     * If their is no varid for the requested name, a new one is created.
     */
    GMAPI_DLL int getVarId(const DelphiString &name);
    
    /**Get an instance variable. Works for both built in variables and user
     * defined variables.
     */
    GMAPI_DLL Value getVar(Instance *ins, int varid, int unknown=0);
    inline Value getVar(int varid, int unknown=0)
    {
        return getVar(getSelf(), varid, unknown);
    }
    inline Value getVar(const DelphiString &name)
    {
        return getVar(getVarId(name));
    }

    /**The ones in GML you can prefix with global.*/
    inline Value getGlobal(int varid)
    {
        return userGlobals->findVar(varid)->val;
    }
    inline Value getGlobal(const DelphiString &name)
    {
        return userGlobals->findVar(name)->val;
    }
    ///@}
}
#endif
