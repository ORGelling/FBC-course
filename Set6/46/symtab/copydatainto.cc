#include "symtab.ih"

    // by enlarge.cc

void Symtab::copyDataInto(Symbol **newData)
{
    for (size_t index = 0; index != d_size; ++index)
        newData[index] = d_data[index];
}
