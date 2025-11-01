#include "data.ih"

    // by 

Data &Data::copyAssign(Type thisType, Data const &other, Type otherType)
{
    Data tmp(other, otherType);
    swap(thisType, tmp, otherType);
    return *this;
}
