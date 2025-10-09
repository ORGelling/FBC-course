#include "strings.ih"

void Strings::swap(Strings &other)
{
    string **tmp = d_data;
    d_data = other.d_data;
    other.d_data = tmp;

    size_t size = d_size;
    d_size = other.d_size;
    other.d_size = size;
}
