#include "numbers.ih"

    // by 

void Numbers::copyFrom(int const *list)
{
    for (size_t index = 0; index != d_size; ++index)
        d_nums[index] = list[index];
}
