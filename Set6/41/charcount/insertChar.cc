#include "charcount.ih"

    // by count.cc

void CharCount::insertChar(char const ch, size_t const setAt)
{
    size_t const size = d_data.nCharObjects++; // get size and then increment
    
    new(d_data.rawCapacity + size) Char;  // Initialise extra Char location
    
    Char *ptr = d_data.rawCapacity;
    
    for (size_t index = size; index != setAt; --index)
    { 
        ptr[index].ch = ptr[index - 1].ch;
        ptr[index].count = ptr[index - 1].count;
    }                           // move values from setAt onwards one step up
    
    ptr[setAt].ch = ch;                     // Set new Char at setAt
    ptr[setAt].count = 1;
}
