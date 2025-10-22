#include "charcount.ih"

    // by count.cc via s_insertChar.cc

void CharCount::insertChar(char const ch, size_t const setAt)
{
    size_t const size = d_data.nCharObjects++;  // get size and then increment
    
    new(d_data.rawCapacity + size) Char;        // Initialise extra Char
    
    moveValues(d_data.rawCapacity, setAt, size);
    
    d_data.rawCapacity[setAt].ch = ch;          // Set new Char at setAt
    d_data.rawCapacity[setAt].count = 1;
}
