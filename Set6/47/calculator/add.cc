#include "calculator.ih"

    // by s_term.cc via expr.cc

bool Calculator::add(Value &lhs)
{
    nextToken();
    
    Value rhs = term();
    
    Token type = equalize(lhs, rhs);
    
    if (type == INT)
        lhs.intValue(lhs.intValue() + rhs.intValue());
    else
        lhs.doubleValue(lhs.doubleValue() + rhs.doubleValue());
    
    nextToken();
    return true;
}
