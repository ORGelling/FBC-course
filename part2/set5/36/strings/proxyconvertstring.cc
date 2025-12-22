#include "strings.ih"

    // by 

Strings::Proxy::operator string const &() const
{
    cerr << "convertString index " << p_idx << '\n';
  //return p_owner->safeAt(p_idx);
  //return *p_owner->d_data.at(p_idx);
    return *p_owner->d_data[p_idx];
}
