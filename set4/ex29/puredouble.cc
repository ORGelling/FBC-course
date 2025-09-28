#include "parser.ih"

bool Parser::pureDouble(double *dest, std::string const &str)
{
    // Use stod and ensure the whole token is consumed.
    size_t pos = 0;
    double value = std::stod(str, &pos);

    if (pos != str.size())          // not all characters were used
        return false;

    *dest = value;

    // integral-like if token has no '.', 'e', or 'E'
    d_integral = (str.find_first_of(".eE") == std::string::npos);

    return true;
}

