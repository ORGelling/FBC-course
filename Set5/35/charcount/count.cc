#include "charcount.ih"

    // by main program.

void CharCount::count(istream &input)
{
    char character;
    while ((character = input.get()) != EOF)
    {
        size_t setAt = 0;
        switch (CharCount::locate(character, setAt))
        {
            case APPEND:                // Both are done by insertChar
            case INSERT:                // due to setAt index
                CharCount::insertChar(setAt, character);
            break;
            case INC:                   // simply increment existing count
                ++d_data.ptr[setAt].count;
        }
    }        
}
