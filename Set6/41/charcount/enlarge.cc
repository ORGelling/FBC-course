#include "charcount.ih"

    // by count.cc

void CharCount::enlarge()
{
    Char *block = static_cast<Char *>(              // New raw memory
                    operator new((d_data.capacity *= 2) * sizeof(Char)));
    
    Char *oldData = d_data.rawCapacity;             // for visual clarity
    for (size_t index = 0; index != d_data.nCharObjects; ++index)
    {
        new(block + index) Char(oldData[index]);        // copy Chars
        oldData[index].~Char();                         // delete old Chars
    }
    
    operator delete(oldData);                       // de-allocate old memory
    
    d_data.rawCapacity = block;                     // Realign pointer
}
