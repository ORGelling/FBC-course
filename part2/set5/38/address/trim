#include "address.ih"

    // by extractfrom.cc

string Address::trim(string const &str)
{
    size_t start = str.first_not_of(" \t\n\r\f\v");     // cut off leading 
    size_t end = str.last_not_of(" \t\n\r\f\v");        // trailing blanks
    
    return (start == string::npos) ? "" : str.substr(start, end - start + 1);
}
