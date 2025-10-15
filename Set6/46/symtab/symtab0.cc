#include "symtab.ih"

    // by 

Symtab::~Symtab()
{
    for (size_t index = 0; index != d_size; ++index)
        delete d_data[index];
    
    operator delete(d_data);
}
