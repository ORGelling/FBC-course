#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity) 
        enlarge();

    d_data[d_size] = new string{ next };
    ++d_size;
}
