#include "data.ih"

    // by 

void Data::swap(Type thisType, Data &other, Type otherType)
{
    (this->*s_swap[thisType][otherType])(other);    // Call matching s_swap
}
