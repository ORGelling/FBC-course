#include "calculator.ih"

    // by run.cc

Value Calculator::evaluate()
{
    if (d_tokenizer.token() == IDENT)
    {
        string name = d_tokenizer.ident();
        size_t index = d_symtab.findIdx(name);
        cout << "symtab index: " << index << '\n';
        //nextToken();
        
        if (!charToken('='))
        {
            nextToken();
            return d_symtab.at(index).value();
        }
        else
        {
            nextToken();
            Value rhs = expr();
            
            d_symtab.at(index).assign(rhs);
            return rhs;
        }
    }
    
    return expr();
}
