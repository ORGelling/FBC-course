#include "calculator.ih"

    // by 

Value Calculator::term()
{
    Value ret = factor();
    
    while ((this->*s_factor[charTokens("*/%")])(ret))
        ;
    
    return ret;
}
