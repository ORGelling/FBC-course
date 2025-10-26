#include "numbers.ih"

    // by 

void Numbers::swap(Numbers &other)
{
    std::swap(d_size, other.d_size);
    std::swap(d_data, other.d_data);
}
