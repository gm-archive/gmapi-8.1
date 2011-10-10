#ifndef GMAPI_INSTANCE_ARRAY_HPP
#define GMAPI_INSTANCE_ARRAY_HPP
#include "Dll.hpp"
namespace gm
{
    struct Instance;
    class InstanceArray
    {
    public:
        Instance *getIndex(int index);
        Instance *get(int id);
    private:
        char _pad0000[0x68];
        int len;
        /**Array of pointers to instances.*/
        Instance **instances;
    };
    GMAPI_DLL extern InstanceArray *instanceArray;
    inline Instance* getInstance(int id)
    {
        return instanceArray->get(id);
    }
    bool initInstanceArray();
}
#endif
