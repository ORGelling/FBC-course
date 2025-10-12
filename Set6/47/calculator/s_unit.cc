#include "calculator.ih"

    // by 

Value (Calculator::*Calculator::s_unit[])() 
=
{
    &Calculator::notOK,         // QUIT
    &Calculator::charUnit,      // CHAR
    &Calculator::intDouble,     // INT
    &Calculator::intDouble,     // DOUBLE
    &Calculator::ident,         // IDENT
    &Calculator::notOK          // ERROR
};
