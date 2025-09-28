#include "calculator.ih"

bool Calculator::number(double *dest, bool *isInt)
{
    double value;
    if (!(d_in >> value))           // read a floating-point number
        return false;

    *dest = value;
    // "integer-ness": within EPS of nearest integer
    double nearest = round(value);
    *isInt = fabs(value - nearest) < EPS;

    return true;
}

