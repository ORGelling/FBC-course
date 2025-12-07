#ifndef INCLUDED_BASIC_
#define INCLUDED_BASIC_

#include <iostream>

class Basic
{
    public:
        Basic();
        Basic(int number);
};

inline Basic::Basic()
{
    std::cout << "Basic default ctor\n";
}

inline Basic::Basic(int number)
{
    std::cout << "Basic int " << number << " ctor\n";
}

#endif
