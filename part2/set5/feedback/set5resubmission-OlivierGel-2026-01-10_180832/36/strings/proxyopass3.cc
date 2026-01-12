#include "strings.ih"

    // by 

Strings::Proxy &Strings::Proxy::operator=(Proxy const &rhs)
{
    string tmp = rhs;                           // use conversion op
    
    return *this = tmp;                         // delegates to other op=
}
