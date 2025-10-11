#include "calculator.ih"

    // by s_unit.cc

Value Calculator::intDouble()
{
    // handle pending token
    Value ret = d_tokenizer.value();
    
    // call next token
    d_tokenizer.nextToken();

    return ret;
}
