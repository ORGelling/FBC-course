#include "calculator.ih"

    // by 

bool (Calculator::*Calculator::s_term[])(Value &ret)
=
{
    &Calculator::add;
    &Calculator::sub;
}
