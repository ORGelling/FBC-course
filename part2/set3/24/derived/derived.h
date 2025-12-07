#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "../base/base.h"
#include <fstream>

class Derived: private std::ofstream, public Base
{
    public:
        Derived(std::string const &name);   // filename 
};
        
#endif
