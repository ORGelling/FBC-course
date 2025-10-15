#include "charcount.ih"

    // by count.cc

void CharCount::enlarge()
{
    Char *newData = newMemory(d_data.capacity *= 2);
    
    copyInto(newData);
    destroy();
    
    d_data.rawCapacity = newData;                     // Realign pointer
}
