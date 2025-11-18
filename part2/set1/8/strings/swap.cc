#include "strings.ih"

void Strings::swap(Strings &other)
{
    size_t *count = d_share;
    d_share = other.d_share;
    other.d_share = count;
    
    string *tmp = d_str;
    d_str = other.d_str;
    other.d_str = tmp;

    size_t size = d_size;
    d_size = other.d_size;
    other.d_size = size;
}
