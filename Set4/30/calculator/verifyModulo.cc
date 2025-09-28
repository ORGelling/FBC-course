#include "calculator.ih"

    // by expression.cc

bool Calculator::verifyModulo()
{                           // It's an int and should not be 0 or negative
    if (!d_lhsIsInt || !d_rhsIsInt || d_lhs < 0 || d_rhs < 1)
    {
        cout << "Invalid modulo operation\n";
        return false;           // Invalid modulo
    }
    return true;
}
