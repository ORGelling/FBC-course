#include "strings.ih"

    // by 

ostream &operator<<(ostream &out, Strings::Proxy const &proxy)
{
    return out << static_cast<string const &>(proxy);
}                                   // we call conversion op explicitly
