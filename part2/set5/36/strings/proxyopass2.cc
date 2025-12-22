#include "strings.ih"

    // by 

Strings::Proxy &Strings::Proxy::operator=(string &&rhs)
{
    cerr << "opassign2\n";
    p_owner->cow(p_idx);
    //*p_owner->d_data[p_idx] = move(rhs);
    p_owner->safeAt(p_idx) = move(rhs);
    return *this;
}
