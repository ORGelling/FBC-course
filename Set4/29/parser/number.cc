#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    string const storePart = d_line.next();
    
    return storePart.empty() ? Parser::EOLN : convert(dest, storePart);
    
}
