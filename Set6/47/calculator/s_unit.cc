#include "calculator.ih"

    // by 

Value (Calculator::*Calculator::s_unit[])() 
=
{
    &Calculator::notOk;         // QUIT
    &Calculator::charUnit;      // CHAR
    &Calculator::intDouble;     // INT
    &Calculator::intDouble;     // DOUBLE
    &Calculator::ident;         // IDENT
    &Calculator::notOk;         // ERROR
};
