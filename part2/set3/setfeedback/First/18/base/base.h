#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <iostream>

class Base
{
    public:
        Base();
        Base(Base const &other);
        Base(Base &&other);
        ~Base();

    private:
};

inline Base::Base()
{
    std::cerr << "Calling Base default ctor\n";
}

inline Base::Base(Base const &other)
{
    std::cerr << "Calling Base copy ctor\n";
}

inline Base::Base(Base &&other)
{
    std::cerr << "Calling Base move ctor\n";
}

inline Base::~Base()
{
    std::cerr << "Calling Base dtor\n";
}

        
#endif
