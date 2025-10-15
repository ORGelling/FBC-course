#include "symtab.ih"

    // by add.cc

void Symtab::enlarge(size_t const newSize)
{
    Symbol **newData = rawPointers(newSize);
    copyDataInto(newData);
    
    operator delete(d_data);
    d_data = newData;
    
    setNull(d_capacity, newSize);
    d_capacity = newSize;
}
