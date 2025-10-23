#include "numbers.ih"

    // by numbers2.cc

void Numbers::copyFrom(int *data)
{
    for (size_t index = 0; index != d_size; ++index)
        d_data[index] = data[index];
}
