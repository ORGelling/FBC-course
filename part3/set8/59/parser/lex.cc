#include "parser.ih"

int Parser::lex()
{
    int token = d_scanner.lex();
    
    switch (token)
    {
        case Tokens::INT:
            d_val_ = stoi(d_scanner.matched());
        break;
        case Tokens::DOUBLE:
            d_val_ = stod(d_scanner.matched());
        break;
        case Tokens::STRING:
            d_val_ = d_scanner.matched();
        break;
        default:
        break;
    }

    return token;
}
