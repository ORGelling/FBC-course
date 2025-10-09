#include "strings.ih"

void Strings::enlarge(size_t const newSize)
{
    string **stringPtrArray = rawPointers(newSize);
    copyPtrsInto(stringPtrArray);
    
    operator delete(d_data);
    d_data = stringPtrArray;
    
    setNull(d_capacity, newSize);
    
    d_capacity = newSize;
}
