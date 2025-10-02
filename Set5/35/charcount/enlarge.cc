#include "charcount.ih"

    // by 

void CharCount::insertChar(size_t const index, char const ch)
{
    Char *newData = new Char[d_data.nCharObjects + 1];
    
    for (size_t idx = 0, size_t offset = 0; idx != nCharObjects + 1; ++idx)
    {
        // copy elements
        newData[idx + offset] = d_data.ptr[idx]; 
        // insert new element
        
        // if needed continue copying elements
    }
}
