#include "parser.ih"

void Parser::error()
{
    cout << "Syntax error\n";
    d_display = false;
}
