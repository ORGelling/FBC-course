#include "symtab.ih"

// by

Symbol const &Symtab::find(std::string const &str)
{
    size_t const idx = findIdx(str);
    return *d_symbols[idx];

    // return *d_symbols[findIdx(str)];  // TODO why does this segfault?
}
