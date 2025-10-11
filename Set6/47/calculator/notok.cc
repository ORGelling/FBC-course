#include "calculator.ih"

    // by s_unit.cc

Value Calculator::notOk()
{
    d_tokenizer.error();
    d_ok = false;
    
    Value ret = d_tokenizer.value();
    
    return ret;
}
