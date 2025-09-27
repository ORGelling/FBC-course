#include "parser.ih"

// by

bool Parser::pureDouble(double *dest, std::string const &str)
{
    size_t pos;
    *dest = std::stod(str, &pos);  // may throw - handled by convert()

    if (pos != str.size())
        // pos is the index of the first character in str that was not used
        // by stod to form the double. If it's not equal to str.size(), then
        // we know that not all characters were used.
        return false;

    // If we reach this point, the conversion succeeded. Now we need to
    // check if it was a pure double, that is, contains one of ".eE".
    d_integral = str.find_first_of(".eE") == std::string::npos;

    return true;
}
