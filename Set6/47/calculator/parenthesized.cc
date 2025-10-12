#include "calculator.ih"

    // by charunit.cc

Value Calculator::parenthesized()
{
    nextToken();
    Value ret = evaluate();
    
    if(charToken(')'))
    {
        nextToken();
        return ret;
    }
    return notOK();
}
