#include "strings.ih"

    // by enlarge.cc

void Strings::setNull(size_t const from, size_t const to)
{
    for (size_t index = from; index != to; ++index)
        d_data[index] = nullptr;
}
