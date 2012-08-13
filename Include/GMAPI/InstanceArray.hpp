#ifndef GMAPI_INSTANCE_ARRAY_HPP
#define GMAPI_INSTANCE_ARRAY_HPP
#include "Dll.hpp"
#include "Instance.hpp"
namespace gm
{
    /**@ingroup instances*/
    ///@{
    /**@brief An array of all the current instances in the game.*/
    class InstanceArray
    {
    public:
        /**Gets the nth instance in the game.*/
        Instance *getIndex(int index)
        {
            assert(index >= 0 && index <= len);
            return instances[index];
        }
        /**Gets the instance with the specified id, or null if no such instance
         * exists.
         */
        Instance *get(int id)
        {
            for(int index=0; index < len; ++index)
            {
                Instance *ins = getIndex(index);
                if(ins->id == id)
                    return ins;
            }
            return 0;
        }
        /**Number of instances.*/
        int getCount()
        {
            return len;
        }
    private:
        char _pad0000[0x68];
        int len;
        /**Array of pointers to instances.*/
        Instance **instances;
    };
    GMAPI_DLL extern InstanceArray *instanceArray;
    /**Shorthand for instanceArray->get(id)*/
    inline Instance* getInstance(int id)
    {
        return instanceArray->get(id);
    }
    ///@}
}
#endif
