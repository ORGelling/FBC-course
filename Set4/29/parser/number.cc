#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    std::string const substring = next();
    return substring.empty() ? Parser::EOLN : convert(dest, substring);
}
