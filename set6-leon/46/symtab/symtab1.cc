#include "symtab.ih"

Symtab::~Symtab()
{
    for (size_t idx = 0; idx != d_size; ++idx)
        delete d_symbols[idx];

    delete[] d_symbols;
}
