#include "calculator.ih"

    // by run.cc

Value Calculator::evaluate()
{
    /*
    Value lhs = expr(); // This is unable to return a Symbol id/ IDENT token
    
    if (d_tokenizer.token() == CHAR || d_tokenizer.token() == IDENT)
        cout << "char token: " << d_tokenizer.token() << '\n';
    
    [[maybe_unused]] string name;
    [[maybe_unused]] Symbol *id = nullptr;
    
    if (d_tokenizer.token() == IDENT)
    {
        cout << "found ID\n";
        name = d_tokenizer.ident();
        id = &d_symtab.find(name);
    }
    
    nextToken();
    
    if (d_tokenizer.token() == CHAR || d_tokenizer.token() == IDENT)
        cout << "char 2 token: " << d_tokenizer.token() << '\n';
    
    if (charToken('='))
    {
        cout << "found =\n";
        nextToken();
        Value rhs = evaluate();
        id->assign(rhs);
        //assign(lhs, rhs);
    }
    
    return lhs;
    */
    
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
