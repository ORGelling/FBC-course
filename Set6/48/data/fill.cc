#define XERR "data"
#include "data.ih"

    // by 

size_t Data::fill(size_t seed)
{
    srandom(seed);

    d_sum = 0;
    for (
        size_t *begin = d_data, *end = d_data + d_size; 
            begin != end; 
                ++begin
    )
        d_sum += *begin = (random() % 100);

    return d_sum;
}
