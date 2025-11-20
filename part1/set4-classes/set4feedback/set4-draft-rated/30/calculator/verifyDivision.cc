#include "calculator.ih"                                                       
                                                                               
    // by expression.cc                                                        
                                                                               
bool Calculator::verifyDivision() const
{
    if (fabs(d_rhs) < 1e-8) // 1e-8 is the zero-cutoff
    {
        cout << "Cannot divide by 0\n"; 
        return false;           // Division by zero 
    }
    return true;
}
