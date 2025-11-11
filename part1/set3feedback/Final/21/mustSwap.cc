#include "quicksort.ih"

bool mustSwap(string &pivot, string &comparison)
{
    return toLower(pivot) > toLower(comparison);
}
