#include "strings.ih"

    // by add.cc & reserve.cc

void Strings::enlarge(size_t const newSize)
{
    string *stringArray = rawStrings(newSize);
    copyStringsInto(stringArray);
    
    destroy();
    
    d_data = stringArray;
    d_capacity = newSize;
}
