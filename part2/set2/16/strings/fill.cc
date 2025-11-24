#include "strings.ih"

    // by 

void Strings::fill(char **ntbs)
{
    for (size_t index = 0; index != d_size; ++index)
    {
        //if (index == 2)
        //    throw bad_alloc{};
        
        d_str[index] = new string(ntbs[index]);
    }
}
