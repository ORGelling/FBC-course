#include "calculator.ih"

    // by 

bool Calculator::divisionOK(bool zeroRhs)
{
    if (zeroRhs)
    {
        cout << "division by zero\n";
        notOK();
    }
    
    return !zeroRhs;
}
