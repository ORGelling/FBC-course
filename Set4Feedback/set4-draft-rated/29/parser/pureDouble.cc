#include "parser.ih"

    // by convert.cc (via number.cc) 

// HB: we do this slightly differently, but if you don't encounter any issues
// HB: it's not a problem (I hope)
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
