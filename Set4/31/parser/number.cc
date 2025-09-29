#include "parser.ih"

    // by 

Parser::Return Parser::number(double *dest)
{
    string const storePart = d_line.next();
    
    return storePart.empty() ? Parser::EOLN : convert(dest, storePart);
    
}
