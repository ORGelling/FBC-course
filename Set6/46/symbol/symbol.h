#ifndef INCLUDED_SYMBOL_
#define INCLUDED_SYMBOL_

#include "../value/value.h"
#include <iosfwd>
#include <string>

class Symbol
{
    std::string d_name;
    Value d_value;
    
    public:
        enum Compare
        {
            LHS_FIRST,
            RHS_FIRST,
            EQUAL,
        };
        
        Symbol(std::string const &name, int intValue);
        Symbol(std::string const &name, double doubleValue);
        
        double doubleValue() const;
        int intValue() const;
        Token type() const;
        Value const &value() const;
        
        void assign(Value const &value);
        
        Compare compare(std::string const &identifier) const;
        
    private:
};

inline double Symbol::doubleValue() const
{
    return d_value.doubleValue();
}
inline int Symbol::intValue() const
{
    return d_value.intValue();
}
inline Token Symbol::type() const
{
    return d_value.token();
}
inline Value const &Symbol::value() const
{
    return d_value;
}
#endif
