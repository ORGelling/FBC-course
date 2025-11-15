#include "numbers.ih"

    // by 

void Numbers::divideContents(int const other)
{
    for (size_t index = 0; index != d_size; ++index)
        d_nums[index] /= other;
}
