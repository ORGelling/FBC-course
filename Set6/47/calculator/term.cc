#include "calculator.ih"

    // by 

Value Calculator::term()
{
    cout << "term\n";
    Value ret = factor();
    
    while ((this->*s_factor[charTokens("*/%")])(ret))
        ;
    
    return ret;
}

// set div 0 & modulo error
