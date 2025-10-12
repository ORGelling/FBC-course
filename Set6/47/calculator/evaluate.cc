#include "calculator.ih"

    // by run.cc

Value Calculator::evaluate()
{
    if (d_tokenizer.token() == IDENT)
    {
        string name = d_tokenizer.ident();
        Symbol &id = d_symtab.find(name);
        nextToken();
        
        if (charToken('='))
        {
            nextToken();
            Value rhs = evaluate();
            id.assign(rhs);
            return rhs;
        }
        else 
        {   
            return id.value(); 
        }
    }
    
    return expr();
}
