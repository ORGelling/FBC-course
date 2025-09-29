#include "calculator.ih"

    // by run.cc 

bool Calculator::expression()
{
    if (!number(&d_lhs, &d_lhsIsInt))       // get lhs
        return false;
    
    if (!getOperator())                     // get operator
        return false;
    
    if (!number(&d_rhs, &d_rhsIsInt))       // get rhs
        return false;
    
    if (d_op == '/')
        return verifyDivision();
    
    if (d_op == '%')
        return verifyModulo();
    
    return true;
}
