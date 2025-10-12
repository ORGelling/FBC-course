#include "calculator.ih"

    // by 

void Calculator::assign(Value &lhs, Value const &rhs)
{
    // check is lhs is a symbol, then use for assigning new value to symbol.
    lhs = rhs;
    nextToken();
}
