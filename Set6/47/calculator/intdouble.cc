#include "calculator.ih"

    // by s_unit.cc

Value Calculator::intDouble()
{
    Value ret = d_tokenizer.value();
    
    nextToken();

    return ret;
}
