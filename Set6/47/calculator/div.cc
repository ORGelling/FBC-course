#include "calculator.ih"

    // by 

bool Calculator::div(Value &lhs)
{
    Value rhs = factor();
    
    Token type = equalize(lhs, rhs);
    
    if(type == INT)
    {
        if (!divisionOK(rhs.intValue() == 0))
            return false;
        lhs.intValue(lhs.intValue() / rhs.intValue());
        return true;
    }
    
    if (!divisionOK(fabs(rhs.doubleValue()) < s_zeroDouble))
        return false;
    lhs.doubleValue(lhs.doubleValue() / rhs.doubleValue());
    return true;
}
