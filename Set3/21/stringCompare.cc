#include "main.ih"

bool stringCompare(char const *pivot, char const *comparison)
{
    for (; *pivot && *comparison; ++pivot, ++comparison)
    {
        char pivotChar = tolower(*pivot);
        char compareChar = tolower(*comparison);
        
        if (pivotChar < compareChar)
            return false;
        if (pivotChar > compareChar)
            return true;
    }
    return tolower(*pivot) < tolower(*comparison);
}
