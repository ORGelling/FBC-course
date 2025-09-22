#include "main.ih"

size_t partition(char *strArray[], size_t const left, size_t const right)
{
    char *pivot = strArray[left];
    size_t pivotIdx = left;
    
    for (size_t index = left + 1; index != right; ++index)
    {
        if (stringCompare(pivot, strArray[index]))
            swap(strArray[++pivotIdx], strArray[index]);
    }
    
    swap(strArray[pivotIdx], strArray[left]);
    
    return pivotIdx;
}

