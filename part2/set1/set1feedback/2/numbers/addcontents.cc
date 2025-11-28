#include "numbers.ih"

    // by 

void Numbers::addContents(Numbers const &other)
{
    for (size_t index = 0; index != d_size; ++index)
        d_nums[index] += other.d_nums[index];
}
