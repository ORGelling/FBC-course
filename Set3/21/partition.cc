#include "main.ih"

size_t partition(char *strArray[], size_t left, size_t right)
{
    char *pivot = strArray[left];
    size_t pivotIdx = left;
    
    for (size_t index = left + 1; index != right + 1; ++index)
    {
        if (stringCompare(pivot, strArray[index]))
            swap(strArray[++pivotIdx], strArray[index]);
    }
    
    swap(strArray[pivotIdx], strArray[left]);
    
    return pivotIdx;
}

