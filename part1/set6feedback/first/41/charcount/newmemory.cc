#include "charcount.ih"

    // by enlarge.cc

CharCount::Char *CharCount::newMemory(size_t const newSize)
{
    return static_cast<CharCount::Char *>(
            operator new(newSize * sizeof(CharCount::Char)));
}
