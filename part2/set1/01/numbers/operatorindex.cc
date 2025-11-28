#include "numbers.ih"

    // by 

int &Numbers::operatorIndex(size_t index) const
{
    boundary(index);
    return d_nums[index];
}
