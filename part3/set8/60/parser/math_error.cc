#include "parser.ih"

void Parser::math_error(char const *msg)
{
    cout << "math error: " << msg << '\n';
    d_display = false;
}
