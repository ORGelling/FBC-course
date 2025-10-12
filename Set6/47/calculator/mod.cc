#include "calculator.ih"

    // by 

bool Calculator::mod(Value &lhs)
{
    nextToken();
    
    Value rhs = factor();
    
    Token type = equalize(lhs, rhs);
    
    if ((type == INT && rhs.intValue() == 0) ||
                (type == DOUBLE && fabs(rhs.doubleValue()) < s_zeroDouble))
    {
        cout << "modulo by zero\n";
        notOK();
        return false;
    }
        
    if (type == INT)
        lhs.intValue(lhs.intValue() % rhs.intValue());
    if (type == DOUBLE)
        lhs.doubleValue(fmod(lhs.doubleValue(), rhs.doubleValue()));
    return true;
}
