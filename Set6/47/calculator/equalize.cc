#include "calculator.ih"

    // by 

Token Calculator::equalize(Value &lhs, Value &rhs)
{
    // if both are int do nothing
    if (lhs.token() == INT && rhs.token() == INT)
        return INT;
    
    if (lhs.token() == INT)
        lhs.toDouble();
    if (rhs.token() == INT)
        rhs.toDouble();
    
    return DOUBLE;
}
