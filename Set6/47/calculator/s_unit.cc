#include "calculator.ih"

    // by 

Value (Calculator::*Calculator::s_unit[])() 
=
{
    &Calculator::notOk;
    &Calculator::charUnit;
    &Calculator::intDouble;
    &Calculator::ident;
};
