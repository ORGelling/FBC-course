#include "charcount.ih"

void CharCount::includeChar([[maybe_unused]] char const ch, 
                                                        size_t const setAt)
{
    ++d_data.rawCapacity[setAt].count;
}
