#include "fillunique.ih"

    // by 

void FillUnique::fill(vector<size_t> &rVec)
{
    rVec.clear();
    
    if (2 * d_size > (d_max - d_min + 1))
        throw "Range too small"s;
    
    for (size_t idx = 0; idx < d_size; ++idx)
        storeValue(rVec);
}
