#include "strings.ih"

void Strings::swap(Strings &other)
{
    string *tmp = d_data;
    d_data = other.d_data;
    other.d_data = tmp;

    size_t size = d_size;
    d_size = other.d_size;
    other.d_size = size;
    
    size_t tmpCapacity = d_capacity;
    d_capacity = other.d_capacity;
    other.d_capacity = tmpCapacity;
}
