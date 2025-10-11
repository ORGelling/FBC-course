#include "symtab.ih" 
 
    // by

size_t Symtab::findIdx(string const &ident)
{
    size_t index = binarySearch(ident);

    if (d_data[index]->compare(ident) != Symbol::EQUAL) 
        add(ident, index); 
    
    return index;
}
