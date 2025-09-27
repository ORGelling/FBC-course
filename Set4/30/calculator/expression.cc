#include "calculator.ih"

    // by run.cc 

bool Calculator::expression()
{
    double lhs = 0.0;
    double rhs = 0.0;
    bool lhsIsInt = true;
    bool rhsIsInt = true;
    char op = '\0';
    
    // calls number, then getOperator, then number again
    // We call number(), which takes a double and a bool
    
    if (!number(&lhs, &lhsIsInt))
        return false;
    
    if (!getOperator(&op))
        return false;
    
    if (!number(&rhs, &rhsIsInt))
        return false;
    
    evaluate(lhs, rhs, op, lhsIsInt, rhsIsInt);
    return true;

}
