#include "derived.ih"

    // by 

void Derived::vHello(ostream &out) const
{
    out << d_string << '\n';
}

