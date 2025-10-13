#include "calculator.ih"

    // by charunit.cc

Value Calculator::parenthesized()
{
    Value ret = expr();
    
    if(!charToken(')'))
    {
        cout << "expected ')'\n";
        return notOK();
    }
    
    nextToken();
    
    return ret;
}
