#include "strings.ih"

    // by enlarge.cc

void Strings::setNull(size_t const from, size_t const to)
{
    for (size_t index = from; index != to; ++index)
        d_data[index] = nullptr;
}
//JB: Indeed, constructor should not need this.
//JB: ChatGPT tends to want to add it when attempting the copy constructor.
//JB: (It sucks at this exercise.) But that's for next week.
