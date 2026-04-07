#include "parser.ih"

void Parser::error(char const *msg)
{
    cout << "Syntax error\n";
    d_display = false;
}
