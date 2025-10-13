#define XERR "data"
#include "data.ih"

    // by 

Data::Data(size_t size, int id)
:
    d_id(id),
    d_size(size),
    d_sum(0)
{
    for (                           // initialize the d_data array to 0
        size_t *begin = d_data, *end = d_data + size;
            begin != end;
                ++begin
    )
        *begin = 0;
}
