#include "strings.ih"

void Strings::enlarge()
{
    string **stringPtrArray = rawPointers(d_capacity * 2);
    
    copyPtrsInto(stringPtrArray);
    setNull();
    
    operator delete(d_data);
    d_data = stringPtrArray;
    
    d_capacity *= 2;
}
