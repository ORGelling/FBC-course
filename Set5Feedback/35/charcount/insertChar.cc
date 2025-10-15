#include "charcount.ih"

    // by count.cc

void CharCount::insertChar(size_t const index, char const ch)
{
    size_t const newSize = ++d_data.nCharObjects;
    Char *newData = new Char[newSize];
    
    size_t idxNew = 0;                  // We know how you dislike init lists!
    size_t idxOld = 0;
    for (; idxNew != newSize; ++idxNew)
    { 
        if (idxNew != index)            // copy old elements and increment
            newData[idxNew] = d_data.ptr[idxOld++];     // after copying
        else
            newData[idxNew].ch = ch;    // or add new element at [index]
    }                                   // default initialised at 1 inside .h
    
    d_data.ptr = newData;
}
