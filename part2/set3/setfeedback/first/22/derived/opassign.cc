#include "derived.ih"

    // by 

Derived &Derived::operator=(Base const &base)
{
    static_cast<Base &>(*this) = base;
    return *this;
}
