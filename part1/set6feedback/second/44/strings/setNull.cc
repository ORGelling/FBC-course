#include "strings.ih"

    // by enlarge.cc

//JB: This should not be needed if d_size keeps proper track of which pointers
//JB: are in use. But I noticed ChatGPT likes it, perhaps because it `fixes`
//JB: bugs... by burying them deeper.
void Strings::setNull(size_t const from, size_t const to)
{
    for (size_t index = from; index != to; ++index)
        d_data[index] = nullptr;
}
