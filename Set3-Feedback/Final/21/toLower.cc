#include "quicksort.ih"

string toLower(string stringLC)
{
    for (char &letter : stringLC)
        letter = tolower(static_cast<unsigned char>(letter));
    
    return stringLC;
}
/* JB: Expensive
 * Perhaps acceptable from a clarity point of view, but copying a string every
 * time you compare it is rather expensive.
 * */
