#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_

#include <iosfwd>

class Base
{
    size_t d_size;
}

class Derived: public Base
{
    std::string *d_data;
    
    public:
        Base();
        Base(std::istream &in);
        Base(Base const &other);
        Base(Base &&tmp);
}

#endif
