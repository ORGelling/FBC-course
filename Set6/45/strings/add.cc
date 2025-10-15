#include "strings.ih"

    // by strings4.cc

void Strings::add(string const &next)
{
    if (d_size == d_capacity) 
        enlarge(d_capacity * 2);
    
    new (d_data + d_size) string{ next };
    d_size++;
}
