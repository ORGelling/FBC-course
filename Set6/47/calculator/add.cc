#include "calculator.ih"

    // by s_term.cc via expr.cc

bool Calculator::add(Value &lhs)
{
    nextToken();
    
    Value rhs = term();
    Value lval = rvalue(lhs);
    Value rval = rvalue(rhs);
    
    Token type = equalize(lval, rval);
    
    if (type == INT)
        lhs.intValue(lval.intValue() + rval.intValue());
    else
        lhs.doubleValue(lval.doubleValue() + rval.doubleValue());
    
    return true;
}
