#include "charcount.ih"

    // by count.cc

CharCount::Action CharCount::locate(char const ch, size_t &setAt) const
{
    size_t const arraySize = d_data.nCharObjects;
    while (setAt != arraySize)              // setAt always starts at 0 when
    {                                       // called inside count() 
        if (d_data.rawCapacity[setAt].ch == ch)     // ch is already in array
            return INC;
        if (static_cast<unsigned char>(ch)  // ch is not in array but larger
                < static_cast<unsigned char>(d_data.rawCapacity[setAt].ch)) 
            return INSERT;                  // entry present
        ++setAt; 
    }
    return APPEND;                          // setAt now at nCharObjects so 
}                                           // insertChar will append it
