#include "symtab.ih"

    // by 

Symbol &Symtab::find(string const &ident)
{
    size_t index = binarySearch(ident);
    
    if (index == d_size || d_data[index]->compare(ident) != Symbol::EQUAL)
        add(ident, index);
    
    return *d_data[index];
}
