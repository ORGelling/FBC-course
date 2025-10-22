#include "main.ih"

//JB: What does it even mean to return a boolean from a comparison? That the
//JB: arguments have been compared?
//JB: If you're doing C++, use strings. If you find that wasteful, use
//JB: string_views.
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
    return tolower(*pivot) > tolower(*comparison);
}                                   // In case of comparing shorter substring
