#include "parser.ih"

double Parser::value()
{
    return stod(d_scanner.matched());
}
