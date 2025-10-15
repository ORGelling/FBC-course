#include "calculator.ih"

    // by s_unit.cc

Value Calculator::intDouble()
{
    Value ret = d_tokenizer.value();
    
    //if (ret.token() == INT)
    //    ;
    //if (ret.token() == DOUBLE)
    //    ;
    nextToken();

    return ret;
}
