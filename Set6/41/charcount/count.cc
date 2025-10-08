#include "charcount.ih"

    // by main program.

void CharCount::count(istream &input)
{
    char character;
    while ((character = input.get()) != EOF)
    {
        size_t setAt = 0;
        (*s_insert[locate(character, setAt)])(character, setAt);
    }
}
