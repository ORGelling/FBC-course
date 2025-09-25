#include "quicksort.ih"

size_t partition
(
    string strArray[], 
    size_t const left, 
    size_t const right
)
{
    string pivot = strArray[left];
    size_t pivotIdx = left;
    
    for (size_t index = left + 1; index != right; ++index)
    {
        if (mustSwap(pivot, strArray[index]))
            swap(strArray[++pivotIdx], strArray[index]);
    }
    
    swap(strArray[pivotIdx], strArray[left]);
    
    return pivotIdx;
}

