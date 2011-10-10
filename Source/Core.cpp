/* Copyright (c) 2011 William Newbery
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
#include "Precompiled.hpp"
#include "CoreInternal.hpp"
#include "CallHook.hpp"
#include "BinSearch.hpp"
#include "Functions.hpp"
#include "Functions/dll.hpp"
#include "InstanceArray.hpp"
namespace gm
{
    Shared *shared          = 0;
    HANDLE sharedHandle     = 0;
    int initcnt = 0;
    
    bool initShared();
    void freeShared();
    bool initStrings();
    
    
    Shared *getShared()
    {
        return shared;
    }
    
    bool init(double get_function_address_ptr)
    {
        if(initcnt)
        {
            initcnt++;
            return true;
        }
        else
        {
            if(!initShared())
                return false;
            if(!initStrings())
                return false; 
            if(!initFunctions(get_function_address_ptr))
                return false;
            if(!initInstanceArray())
                return false;
            if(!shared->initCnt)
            {
                if(!installCallHook((void*)(uintptr_t)get_function_address("external_call").real))
                    return false;
            }
            shared->initCnt++;
            ++initcnt;
            return true;
        }
    }
    void shutdown()
    {
        if(--initcnt)
        {
            if(!--shared->initCnt)
                removeCallHook();
            freeShared();
        }
    }
    
    std::wstring getSharedMemName()
    {
        DWORD id = GetCurrentProcessId();
        std::wstringstream ss;
        ss << L"SVGMAPI_SharedMem_" << id;
        return ss.str();
    }
    bool initShared()
    {
        std::wstring name = getSharedMemName();
        sharedHandle = CreateFileMapping(
            INVALID_HANDLE_VALUE,
            NULL,
            PAGE_READWRITE | SEC_COMMIT,
            0, sizeof(Shared),
            name.c_str());
        shared = (Shared*)MapViewOfFile(
            sharedHandle, FILE_MAP_WRITE,
            0,0,0);
        return shared != 0;
    }
    void freeShared()
    {
        UnmapViewOfFile(shared);
        CloseHandle(sharedHandle);
    }
}
