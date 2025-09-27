#include "calculator.ih"

    // by run.cc 

bool Calculator::expressionChained()
{
    if (!number(&d_lhs, &d_lhsIsInt))
        return false;
    
    while (true)
    {
        if (!getOperator())
            return false;
        
        if (!number(&d_rhs, &d_rhsIsInt))
            return false;
        
        if (d_op == '/')
            return verifyDivision();
        
        if (d_op == '%')
            return verifyModulo();
    
        switch (d_op)
        {
            case '+': 
                d_lhs += d_rhs; 
            break;
            case '-':
                d_lhs -= d_rhs; 
            break;
            case '*':
                d_lhs *= d_rhs; 
            break;
            case '/': 
                d_lhs /= d_rhs; 
            break;
            case '%': 
                d_lhs = static_cast<int>(d_lhs) % static_cast<int>(d_rhs); 
            break;
        }
    }     
    return true;
}
