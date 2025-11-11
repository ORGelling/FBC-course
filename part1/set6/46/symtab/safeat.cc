#include "symtab.ih"

    // by at() in symtab.h

namespace {
    Symbol emptySymbol;
}

Symbol &Symtab::safeAt(size_t const index) const
{
    if (index >= d_size)
        return emptySymbol;
    
    return *d_data[index];
}
