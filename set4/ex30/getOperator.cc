#include "calculator.ih"

bool Calculator::getOperator(char *op)
{
    char c;
    if (!(d_in >> c))
        return false;

    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
    {
        *op = c;
        return true;
    }
    return false;
}

