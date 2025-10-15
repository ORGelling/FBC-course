#include "calculator.ih"

    // by 

void Calculator::prompt()
{
    d_ok = true;
    cout << "? ";
    nextToken();
}
