#include "strings.ih"

    // by add.cc & reserve.cc

void Strings::enlarge(size_t const newSize)
{
    string *stringArray = rawStrings(newSize);
    copyStringsInto(stringArray);
    
    operator delete(d_data);
    d_data = stringPtrArray;
    
    setNull(d_capacity, newSize);       // set pointers to nullptr
    
    d_capacity = newSize;
}
