#include "calculator.ih"

    // by s_unit.cc

Value Calculator::ident()
{
    // handle pending token
    string const identifier = d_tokenizer.ident();
    size_t const index = d_symtab.findIdx(identifier);
    
    Value ret{ index, d_tokenizer.token() };
    
    // call next token
    d_tokenizer.nextToken();

    return ret;
}
