#include "strings.ih"

    // by 

Strings::Proxy::operator string const &() const
{
  //cerr << "convertString index " << p_idx << '\n';
    return p_owner->idx(p_idx);
}
