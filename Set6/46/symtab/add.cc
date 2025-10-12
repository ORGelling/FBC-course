#include "symtab.ih"

    // by 

void Symtab::add(string const &ident, size_t const position)
{
    if (d_size == d_capacity)
        enlarge(d_capacity * 2);
    
    movePtrs(position);
    d_data[position] = new Symbol{ ident };
    ++d_size;
}
