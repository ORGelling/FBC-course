#include "calculator.ih"

    // by s_unit.cc

Value Calculator::ident()
{
    string const identifier = d_tokenizer.ident();
    Value ret = d_symtab.find(identifier).value();
    show(ret);
    //Value ret{ index, IDENT };
    
    
    
    nextToken();

    return rvalue(ret);
}
