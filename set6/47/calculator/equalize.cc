#include "calculator.ih"

    // by 

Token Calculator::equalize(Value &lhs, Value &rhs)
{
    if (lhs.token() == INT && rhs.token() == INT)
        return INT;
    
    if (lhs.token() == INT)
        toDouble(lhs);
    if (rhs.token() == INT)
        toDouble(rhs);
    
    return DOUBLE;
}
