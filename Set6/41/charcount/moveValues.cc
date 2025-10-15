#include "charcount.ih"

    // by insertChar.cc

void CharCount::moveValues(Char *ptr, size_t const start, size_t const end)
{
    for (size_t index = end; index != start; --index) 
        ptr[index] = ptr[index - 1]; 
}
