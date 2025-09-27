#include "calculator.ih"                                                       
                                                                               
    // by expression.cc                                                        
                                                                               
bool Calculator::verifyDivision()
{
    if ((d_rhs < 0 ? -d_rhs : d_rhs) < 1e-8)
    {
        cout << "Cannot divide by 0\n"; 
        return false;           // Division by zero 
    }
    return true;
}
