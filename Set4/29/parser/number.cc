#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    std::string const substring = d_line.next();
    return substring.empty() ? Parser::EOLN : convert(dest, substring);
}
