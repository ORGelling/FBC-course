#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity) 
        enlarge(d_capacity * 2);
    
    d_data[d_size++] = new string{ next };
}
