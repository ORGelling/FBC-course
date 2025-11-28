#include "strings.ih"

ostream &operator<<(ostream &out, Strings::Proxy const &proxy)
{
    //return out << proxy.value();
    return out << static_cast<string const &>(proxy);
}                                           // using conversion
