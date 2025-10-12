#include "calculator.ih"

    // by 

bool (Calculator::*Calculator::s_factor[])(Value &ret) 
= 
{
    &Calculator::mul,
    &Calculator::div,
    &Calculator::mod,
    &Calculator::done
};
