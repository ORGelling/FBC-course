#include "calculator.ih"

    // by expression.cc

bool Calculator::getOperator()
{
    string const substring = d_parser.next();
    d_op = substring.empty() ? '\0' : substring[0]; // HB: `.front()` works too I think
    
    switch (d_op)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':                           // all merged entrypoints
            return true;                    // return ends function
        default:
            cout << "invalid operator\n";
            return false;                   // same here so no breaks needed
    }
}
