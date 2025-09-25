#include "quicksort.ih"

string toLower(string &input)
{
    string stringLC = input;
    for (char &letter : stringLC)
        letter = tolower(static_cast<unsigned char>(letter));
    
    return stringLC;
}
