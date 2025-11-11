#include "symtab.ih"

// by

Symbol &Symtab::safeAt(size_t const idx) const
{
    if (idx >= d_size)
        throw std::out_of_range("Symtab::safeAt");

    return *d_symbols[idx];
}
