#include "calculator.ih"

    // by run.cc 

bool Calculator::expression()
{
    if (!number(&d_lhs, &d_lhsIsInt))
        return false;
    
    if (!getOperator())
        return false;
    
    if (!number(&d_rhs, &d_rhsIsInt))
        return false;
    
    if (d_op == '/')
        return verifyDivision();
    
    if (d_op == '%')
        return verifyModulo();
    
    return true;
}
