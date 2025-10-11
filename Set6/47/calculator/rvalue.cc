#include "calculator.ih"

    // by 

Value Calculator::rvalue(Value const &value) const
{
    if (value.token() == IDENT)
        return d_symtab.at(value.intValue()).value();
            
    return value;
}
