#include "numbers.ih"

    // by 

void Numbers::setNums(int const value)
{
    for (size_t index = 0; index != d_size; ++index)
        d_nums[index] = value;
}
