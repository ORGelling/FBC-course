#include "parser.ih"

    // by convert.cc (via number.cc) 

bool Parser::pureDouble(double *dest, string const &str)
{
    size_t position;
    *dest = stod(str, &position);   // Throw handled by convert()
    
    if (position != str.size())     // position is the index 1 beyond the
        return false;               // last character used by stod().
                                    // If == size, all chars were used. 
    d_integral = str.find_first_of(".eE") == string::npos;
    
    return true;
}
