#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_
#include "../base/base.h"

class Derived: public Base
{
    public:
        void hello() const;
        Derived &operator=(Base const &base);
};

inline void Derived::hello() const
{
    std::cout << "Derived says hello!\n";
}

#endif
