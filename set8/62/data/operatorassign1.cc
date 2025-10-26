#include "data.ih"

    // by 

Data &Data::operator=(Data const &other)
{
    Data tmp(other);
    swap(tmp);
    return *this;
}
