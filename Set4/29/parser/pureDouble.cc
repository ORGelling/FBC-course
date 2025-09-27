#include "parser.ih"

    // by convert.cc (via number.cc) 

bool Parser::pureDouble(double *dest, string const &str)
{
    size_t position;
    *dest = stod(str, &position);
    
    if (position != str.size())
        return false;
    
    d_integral = str.find(".eE") == string::npos;
    
    return true;
}
