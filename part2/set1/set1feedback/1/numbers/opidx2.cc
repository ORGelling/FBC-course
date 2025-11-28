#include "numbers.ih"

    // by 

int const &Numbers::operator[](size_t index) const
{
    return operatorIndex(index);
}
