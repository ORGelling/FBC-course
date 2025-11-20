#include "calculator.ih"

    // by s_unit.cc

Value Calculator::notOK()
{
    d_tokenizer.error();
    d_ok = false;
    
    Value ret = d_tokenizer.value();
    //show(ret);    
    return ret;
}
