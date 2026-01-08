#include "doublestep.ih"

    // by 

DoubleStep &DoubleStep::operator++()
{
    d_value += 2;
    return *this;
}
