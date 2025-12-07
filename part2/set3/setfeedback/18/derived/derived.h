#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "../base/base.h"

class Derived: public Base
{
    public:
        Derived() = default;
        Derived(Derived const &other);
        Derived(Derived &&tmp);
        ~Derived() = default;

    private:
};

/*
inline Derived::Derived()
//:
{}
*/

inline Derived::Derived(Derived const &other)
:
    Base(std::move(const_cast<Derived &>(other)))   // Very bad practice :-(
{
    std::cerr << "Derived copy calling move\n";
}

inline Derived::Derived(Derived &&tmp)
:
    Base(tmp)
{
    std::cerr << "Derived move calling copy\n";
}

/*
inline Derived::~Derived()
{}
*/

#endif
