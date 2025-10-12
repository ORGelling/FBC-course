#include "calculator.ih"

    // by run.cc

Value Calculator::evaluate()
{
    if (d_tokenizer.token() == IDENT)
    {
        string name = d_tokenizer.ident();
        size_t index = d_symtab.findIdx(name);
        
        nextToken();
        
        if (charToken('='))
        {
            nextToken();
            Value rhs = expr();
            
            d_symtab.at(index).assign(rhs);
            return rhs;
        }
    }
    return expr();
}
