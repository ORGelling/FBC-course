#include "charcount.ih"

    // by enlarge.cc

void CharCount::copyInto(Char *newData)
{
    for (size_t index = 0; index != d_data.nCharObjects; ++index)
        new(newData + index) Char(d_data.rawCapacity[index]);
}
