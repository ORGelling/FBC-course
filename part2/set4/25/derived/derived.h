#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "../base/base.h"
#include <string>

class Derived: public Base
{
    std::string d_string;
    
    public:
        Derived(std::string text)
        :
            d_string(text)
        {}
    
    private:
        vHello(std::ostream &out) override
        {
            out << d_string << '\n';
        }
};
        
#endif
