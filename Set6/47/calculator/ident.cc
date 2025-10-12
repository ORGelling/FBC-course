#include "calculator.ih"

    // by s_unit.cc

Value Calculator::ident()
{
    string const identifier = d_tokenizer.ident();
    size_t const index = d_symtab.findIdx(identifier);
    
    Value ret{ index, IDENT };
    
    nextToken();

    return ret;
}
