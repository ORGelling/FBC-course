#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "../base/base.h"
#include <string>

class Derived: public Base
{
    std::string d_string;
    
    public:
        Derived();              // sets d_string = "hello from Derived"
        explicit Derived(std::string const &text);
        ~Derived() override = default;
    
    protected:
        void vHello(std::ostream &out) const override;
};


//:


// inline definitions
inline Derived::Derived()
:
    d_string("hello from Derived")
{}

inline Derived::Derived(std::string const &text)
:
    d_string(text)
{}


#endif
