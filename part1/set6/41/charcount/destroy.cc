#include "charcount.ih"

void CharCount::destroy()
{
    for (size_t index = 0; index != d_data.nCharObjects; ++index) 
        d_data.rawCapacity[index].~Char(); 
     
    operator delete(d_data.rawCapacity);
}
