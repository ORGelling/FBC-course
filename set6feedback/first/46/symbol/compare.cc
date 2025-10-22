#include "symbol.ih"

    // by 

Symbol::Compare Symbol::compare(string const &identifier) const
{
    if (d_name < identifier)
        return Symbol::LHS_FIRST;
    if (d_name > identifier)
        return Symbol::RHS_FIRST;
    return Symbol::EQUAL;
}
