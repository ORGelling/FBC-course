#include "main.ih"

size_t countChars()
{
    size_t charCount = 0;
    
    int character;
    while ((character = cin.get()) != EOF)
        ++charCount;
    
    return charCount;
}
