#ifndef INCLUDED_VALUE_
#define INCLUDED_VALUE_

#include "../token.h"

class Value
{
    union uValue
    {
        int u_int;
        double u_double;
        char u_char;
    }
    
    Token d_token;
    uValue d_value;
    
    public:
        Value();
        Value(double const number);
        Value(size_t const index, )
        
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

#endif
