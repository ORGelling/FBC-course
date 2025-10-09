#include "strings.ih"

    // by enlarge.cc

void Strings::setNull()
{
    for (size_t index = 0; index != d_capacity; ++index)
        d_data[d_capacity + index] = nullptr;
}
