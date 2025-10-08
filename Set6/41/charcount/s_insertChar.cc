#include "charcount.ih"

void (CharCount::*CharCount::s_insertChar[])
(
    char const ch,
    size_t const indeix 
) =
{
    &CharCount::appendChar,             // Append to Char object array
    &CharCount::insertChar,             // Insert inside for ordering
    &CharCount::includeChar             // increment existing Char
};
