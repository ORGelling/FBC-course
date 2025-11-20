#include "data.ih"

    // by 

Data &Data::moveAssign(Type thisType, Data &&tmp, Type tmpType)
{
    swap(thisType, tmp, tmpType);
    return *this;
}
