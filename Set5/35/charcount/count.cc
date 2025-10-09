#include "charcount.ih"

    // by main program.

void CharCount::count(istream &input)
{
    char character;
    while ((character = input.get()) != EOF)
    {
        size_t setAt = 0;
        switch (locate(character, setAt))
        {
            case APPEND:                // Both are done by insertChar
            case INSERT:                // due to setAt index
                insertChar(setAt, character);
            break;
            case INC:                   // simply increment existing count
                ++d_data.ptr[setAt].count;
        }
    }        
}
