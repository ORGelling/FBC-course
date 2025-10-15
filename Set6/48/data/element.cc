#include "data.ih"

    // by 

size_t Data::element(size_t idx) const
{
    if (idx < d_size)
        return d_data[idx];

    cerr << "invalid index " << idx << '\n';
    return 0;
}
