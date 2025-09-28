#include "quicksort.ih"

string toLower(string stringLC)
{
    for (char &letter : stringLC)
        letter = tolower(static_cast<unsigned char>(letter));
    
    return stringLC;
}
