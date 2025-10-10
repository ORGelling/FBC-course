#ifndef INCLUDED_VALUE_
#define INCLUDED_VALUE_

#include "../token.h"
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
        Value(size_t const symbolIndex, Token type);
        
        int intValue() const;
        void intValue(int const value);
        double doubleValue() const;
        void doubleValue(double const value);
        char charValue() const;
        void charValue(char const value);
        
        Token token() const;
        
        void requireSpecial(Token token);
    private:
};

inline int Value::intValue() const
{
    return d_value.u_int;
}
inline void Value::intValue(int const value)
{
    d_value.u_int = value;
}
inline double Value::doubleValue() const
{
    return d_value.u_double;
}
inline void Value::doubleValue(double const value)
{
    d_value.u_double = value;
}
inline char Value::charValue() const
{
    return d_value.u_char;
}
inline void Value::charValue(char const value)
{
    d_value.u_char = value;
}
inline Token Value::token() const
{
    return d_token;
}

#endif
