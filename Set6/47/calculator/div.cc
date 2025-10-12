#include "calculator.ih"

    // by 

bool Calculator::div(Value &lhs)
{
    nextToken();
    
    Value rhs = factor();
    Token type = equalize(lhs, rhs);
    
    bool zeroRhs = (type == INT) ? (rhs.intValue() == 0) 
                            : (fabs(rhs.doubleValue()) < s_zeroDouble);
    
    if (!divisionOK(zeroRhs))
    {
        notOK();
        return false;
    }
    if(type == INT)
        lhs.intValue(lhs.intValue() / rhs.intValue());
    else
        lhs.doubleValue(lhs.doubleValue() / rhs.doubleValue());
    return true;
}
