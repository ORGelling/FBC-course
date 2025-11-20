#include "numbers.ih"

    // by 

Numbers &Numbers::operator=(Numbers const &other)
{
    Numbers tmp(other);
    swap(tmp);
    return *this;
}
