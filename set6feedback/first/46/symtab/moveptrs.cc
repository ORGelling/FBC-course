#include "symtab.ih"

    // by add.cc

void Symtab::movePtrs(size_t const from)
{
    for (size_t index = d_size; index != from; --index)
        d_data[index] = d_data[index - 1];
}
