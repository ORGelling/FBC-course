#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_

#include <iosfwd>

class Base
{
    size_t d_size = 0;
    
    public:
        Base();
        Base(size_t size);
        // dtor, members, etc
};

class Derived: public Base
{
    std::string *d_data;
    
    public:
        Derived();
        Derived(std::istream &in);
        Derived(Base const &other);
        Derived(Base &&tmp);
        // dtor, members, etc
};

#endif
