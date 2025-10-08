#include "charcount.ih"

void (CharCount::*CharCount::s_insertChar[])
(
    size_t const index, 
    char const ch
) =
{
    &CharCount::appendChar,             // Append to Char object array
    &CharCount::insertChar,             // Insert inside for ordering
    &CharCount::includeChar             // increment existing Char
}
