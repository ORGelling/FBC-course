#include "charcount.ih"

    // by count.cc

void (CharCount::*CharCount::s_insertChar[])
(
    char const ch,
    size_t const index 
) =
{
    &CharCount::appendChar,             // Append to Char object array
    &CharCount::insertChar,             // Insert inside for ordering
    &CharCount::includeChar             // increment existing Char
};
