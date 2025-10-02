#include "charcount.ih"

    // by 

void CharCount::count(stream &input)
{
    size_t charCount = 0;
    
    char character;
    while (input.get(character) != EOF)
    {
        size_t index = 0;
        switch (CharCount::locate(character, index))
        {
            case APPEND:
                // make new array and add to end
                
            case INSERT:
                // make new array and insert at right spot
            case INC:
                // add count to existing CharCount::Char struct
        }
    }        
}
