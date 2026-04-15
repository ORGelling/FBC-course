#include "parser.ih"

int Parser::lex()
{
    int token = d_scanner.lex();

    if (token == Tokens::IDENT)
        d_val_ = RuleValue{ d_scanner.matched() };
    else if (token == Tokens::CHAR)
    {
        std::string text = d_scanner.matched();
        d_val_ = RuleValue{ text.substr(1, text.size() - 2) };
    }                           // cut off ' ' surrounding chars like '\n'

    return token;
}
