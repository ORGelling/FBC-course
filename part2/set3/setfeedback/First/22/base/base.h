#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <iostream>

class Base
{
    public:
        void hello() const;
};

inline void Base::hello() const
{
    std::cout << "Base says hello!\n";
}

#endif
