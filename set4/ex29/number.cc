#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    // get next whitespace-separated token from the current line
    string token = d_line.next();

    if (token.empty())
        return EOLN;

    return convert(dest, token);
}

