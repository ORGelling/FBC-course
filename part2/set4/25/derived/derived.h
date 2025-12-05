#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "../base/base.h"
#include <string>

class Derived: public Base
{
    std::string d_string;
    
    public:
        explicit Derived(std::string const &text)
        :
            d_string(text)
        {}
    
    protected:
        void vHello(std::ostream &out) const override
        {
            out << d_string << '\n';
        }
};
        
#endif
