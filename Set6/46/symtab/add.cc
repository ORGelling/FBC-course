#include "symtab.ih"

    // by 

void Symtab::add(string const &ident, size_t const position)
{
    cout << "adding: " << ident << '\n';
    
    if (d_size == d_capacity)
        enlarge(d_capacity * 2);
    
    cout << "adding: " << ident << '\n';
    
    movePtrs(position);
    d_data[position] = new Symbol{ ident };
    ++d_size;
}
