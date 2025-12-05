#include "strings.ih"

Strings::Proxy &Strings::Proxy::operator=(Proxy const &rhs)
{
    // assign rhs to string being pointed at
    string tmp = rhs;                   // using conversion operator
    
//  string tmp = rhs.p_owner->safeAt(rhs.p_idx);    // if conversion is NAE
    
    return *this = tmp;                 // delegating to other assignment op
}
