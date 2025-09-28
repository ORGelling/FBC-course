#include "calculator.ih"

bool Calculator::expression()
{
    d_in.clear();
    d_in.str(d_line);               // feed the current line to the parser

    if (!number(&d_lhs, &d_lhsIsInt))
        return false;

    if (!getOperator(&d_op))
        return false;

    if (!number(&d_rhs, &d_rhsIsInt))
        return false;

    // there must be nothing extra after the rhs number
    char extra;
    if (d_in >> extra)
        return false;

    return true;
}

