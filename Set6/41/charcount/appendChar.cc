#include "charcount.ih"

    // by count.cc, via s_insertChar.cc

void CharCount::appendChar(char const ch, [[maybe_unused]] size_t const setAt)
{
    size_t const size = d_data.nCharObjects++;
    
    new(d_data.rawCapacity + size) Char(ch);        // Initialise new Char
}                                                   // with constructor
