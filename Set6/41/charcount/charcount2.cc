#include "charcount.ih"

CharCount::~CharCount()
{
    for (size_t index = 0; index != d_data.nCharObjects; ++index)
        d_data.rawCapacity[index].~Char();
    
    operator delete(d_data.rawCapacity);
}
