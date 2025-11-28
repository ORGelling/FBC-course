#include "numbers.ih"

    // by 

int &Numbers::operator[](size_t index)
{
    return operatorIndex(index);
}
