#include "calculator.ih"

    // by run.cc

Value Calculator::evaluate()
{
    // Call expr() and check if it is only a symbol?
    
    if (d_tokenizer.token() == IDENT)
    {
        string name = d_tokenizer.ident();
        Symbol &id = d_symtab.find(name);
        nextToken();
        
        if (charToken('='))         // This should be calling the assign()
        {                           // function and has to check for IDENT
            nextToken();
            Value rhs = evaluate();
            id.assign(rhs);
            return rhs;
        }
        else 
        {   
            return id.value(); 
        }                           // If we can put the last token back into
    }                               // the stream this could have worked too.
                                    // parse the rest by expr().
    return expr();
}
