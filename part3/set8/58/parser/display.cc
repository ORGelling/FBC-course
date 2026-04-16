#include "parser.ih"

void Parser::display(double &expr)
{
    if (d_display)
        cout << expr << '\n';
    prompt();
}
