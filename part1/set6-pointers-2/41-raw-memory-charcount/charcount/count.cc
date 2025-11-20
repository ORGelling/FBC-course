#include "charcount.ih"

    // by main program.

void CharCount::count(istream &input)
{
    char character;
    while ((character = input.get()) != EOF)
    {
        size_t setAt = 0;
        (this->*s_insertChar[locate(character, setAt)])(character, setAt);
        
        if (d_data.nCharObjects == d_data.capacity)
            enlarge();
    }
}
