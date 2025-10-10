#include "symtab.ih"

    // by enlarge.cc

Symbol **Symtab::rawPointers(size_t const newCapacity)
{
    return static_cast<Symbol **>(
                operator new(newCapacity * sizeof(Symbol *)));
}
