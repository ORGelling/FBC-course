#include "calculator.ih"

    // by run.cc

Value Calculator::evaluate()
{
    if (d_tokenizer.token() == IDENT)
    {
        string name = d_tokenizer.identifier();
        size_t index = d_symtab.findIdx(name);
        
        nextToken();
        
        if (charToken('='))
        {
            nextToken();
            Value rhs = expr();
            
            assign(d_symtab.at(index).value, rhs);
            return rhs;
        }
    }
    return expr();
}
