#include "charcount.ih"

    // by count.cc

void CharCount::appendChar(char const ch)
{
    size_t const newSize = ++d_data.nCharObjects;
    Char *newData = new Char[newSize];
    
    for (size_t index = 0; index != newSize; ++idxNew)
            newData[index] = d_data.ptr[index];
    
    newData[idxNew].ch = ch;    // or add new element at [index]
    
    d_data.ptr = newData;
}
