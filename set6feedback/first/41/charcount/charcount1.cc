#include "charcount.ih"

CharCount::CharCount()
{
    d_data.rawCapacity = static_cast<Char *>(
                        operator new(d_data.capacity * sizeof(Char)));
}
