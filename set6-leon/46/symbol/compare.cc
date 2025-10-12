#include "symbol.ih"

// by

Symbol::Comparison Symbol::compare(std::string const &str) const
{
    if (d_name < str)
        return LHS_FIRST;
    if (d_name > str)
        return RHS_FIRST;
    return EQUAL;
}
