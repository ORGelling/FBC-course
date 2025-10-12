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
        Symbol();
        Symbol(std::string const &name, int intValue = 0);
        Symbol(std::string const &name, double doubleValue);
        
        std::string const &ident() const;
        double doubleValue() const;
        int intValue() const;
        Token type() const;
        Value &value();
        Value const &value() const;
        
        void assign(Value const &value);
        
        Compare compare(std::string const &identifier) const;
        
    private:
};

inline std::string const &Symbol::ident() const
{
    return d_name;
}
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
inline Value &Symbol::value()
{
    return d_value;
}
inline Value const &Symbol::value() const
{
    return d_value;
}
#endif
