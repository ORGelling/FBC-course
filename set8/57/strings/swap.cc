#include "strings.ih"

void Strings::swap(Strings &other)
{
    std::swap(d_data, other.d_data);
    std::swap(d_size, other.d_size);
    std::swap(d_capacity, other.d_capacity);
}
