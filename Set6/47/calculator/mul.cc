#include "calculator.ih"

    // by 

bool Calculator::mul(Value &lhs)
{
    Value rhs = factor();
    
    Token type = equalize(lhs, rhs);

    if(type == INT)
        lhs.intValue(lhs.intValue() * rhs.intValue());
    else
        lhs.doubleValue(lhs.doubleValue() * rhs.doubleValue());

    return true;
}
