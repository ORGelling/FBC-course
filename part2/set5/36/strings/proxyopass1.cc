#include "strings.ih"

    // by 

Strings::Proxy &Strings::Proxy::operator=(string const &rhs)
{
    cerr << "opassign1\n";
    p_owner->cow(p_idx);                // can hand this a string to, to 
    //*p_owner->d_data[p_idx] = move(rhs);
    p_owner->safeAt(p_idx) = rhs;       // directly instantiate the copied
    return *this;                       // string with the new rhs contents?
}
