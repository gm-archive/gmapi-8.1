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
#ifndef GMAPI_VALUE_HPP
#define GMAPI_VALUE_HPP
#include "String.hpp"
#include <string>
namespace gm
{
    class Value
    {
    public:
        friend void swap(Value &a, Value &v);
        enum Type
        {
            REAL   = 0,
            STRING = 1
        };
        Value():type(REAL), real(0), str(0){}
        Value(double real):type(REAL), real(real), str(0){}
        Value(const char *str):type(REAL), real(0), str(0)
        {
            setStr(str);
        }
        Value(const char *str, unsigned len):type(REAL), real(0), str(0)
        {
            setStr(str, len);
        }
        Value(const std::string &str):type(REAL), real(0), str(0)
        {
            setStr(str);
        }
        Value(const Value &v)
        :type(v.type), real(v.real), str(0)
        {
            if(type == STRING)
                setStr(v.str, gmstrLen(v.str));
        }
        ~Value()
        {
            if(this->str)
                releaseStr(this->str);
        }
        
        Value& operator = (Value v)
        {
            swap(*this, v);
            return *this;
        }
        Value& operator = (double v)
        {
            type = REAL;
            real = v;
            releaseStr(this->str);
            this->str = 0;
            return *this;
        }
        Value& operator = (const char *str)
        {
            setStr(str);
            return *this;
        }
        Value& operator = (const std::string &str)
        {
            setStr(str);
            return *this;
        }
        void setStr(const char *str)
        {
            setStr(str, strlen(str));
        }
        void setStr(const std::string &str)
        {
            setStr(str.c_str(), str.size());
        }
        void setStr(const char *str, unsigned len)
        {
            type = STRING;
            releaseStr(this->str);
            this->str = newStr(str, len);
        }
        Type type;
        double real;
        char *str;
    };
    inline void swap(Value &a, Value &b)
    {
        using std::swap;
        swap(a.type, b.type);
        swap(a.real, b.real);
        swap(a.str, b.str);
    }
}
#endif
