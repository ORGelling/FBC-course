#include "main.ih"

bool stringCompare(char *pivot, char *comparison)
{
    for (; *pivot && *comparison; ++pivot, ++comparison)
    {
        char pivotChar = tolower(*pivot);
        char compareChar = tolower(*comparison);
        if (pivotChar < compareChar)
            return true;
        if (pivotChar > compareChar)
            return false;
    }
    return tolower(*pivot) < tolower(*comparison);
}
