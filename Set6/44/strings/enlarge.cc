#include "strings.ih"

    // by add.cc & reserve.cc

void Strings::enlarge(size_t const newSize)
{
    string **stringPtrArray = rawPointers(newSize);
    copyPtrsInto(stringPtrArray);
    
    operator delete(d_data);
    d_data = stringPtrArray;
    
    setNull(d_capacity, newSize);       // set pointers to nullptr
    
    d_capacity = newSize;
}
