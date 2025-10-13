#ifndef INCLUDED_VALUE_
#define INCLUDED_VALUE_

#include "../enum/enum.h"
#include <iosfwd>
#include <cstddef>

class Value
{
    union uValue
    {
        int u_int;
        double u_double;
        char u_char;
    };
    
    Token d_token;
    uValue d_value;
    
    public:
        Value();
        Value(int const number);
        Value(double const number);
        Value(char const number);
        Value(size_t const symbolIndex, Token const type);
        
        int intValue() const;
        void intValue(int const value);
        double doubleValue() const;
        void doubleValue(double const value);
        char charValue() const;
        void charValue(char const value);
        
        Token token() const;
        void setToken(Token const token);
        
        void requireSpecial(Token const token);
    private:
};

inline int Value::intValue() const
{
    return d_value.u_int;
}
inline double Value::doubleValue() const
{
    return d_value.u_double;
}
inline char Value::charValue() const
{
    return d_value.u_char;
}
inline Token Value::token() const
{
    return d_token;
}
inline void Value::setToken(Token const token)
{
    d_token = token;
}

#endif
