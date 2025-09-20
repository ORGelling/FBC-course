#include "main.ih"

size_t partition(char *strArray[], size_t left, size_t right)
{
    char *pivot = strArray[left];
    
    size_t pivotIdx = right;
    for (size_t index = right; index != left; --index)
    {
        if (stringCompare(pivot, strArray[index]))
            swap(strArray[index], strArray[--pivotIdx]);
    }
    swap(strArray[left], strArray[pivotIdx]);
    
    return pivotIdx;
}

