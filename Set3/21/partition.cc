#include "quicksort.ih"

size_t partition(string strArray[], size_t const left, size_t const right)
{
    string pivot = strArray[left];      // Leftmost element is our pivot
    size_t pivotIdx = left;             // Track where pivot will end up
    
    for (size_t index = left + 1; index != right; ++index)
    {                                   // Read through array to swap if
        if (mustSwap(pivot, strArray[index]))                   // needed
            swap(strArray[++pivotIdx], strArray[index]);
    }
    
    swap(strArray[pivotIdx], strArray[left]);       // place pivot beyond
                                                    // swapped elements
    return pivotIdx;
}

