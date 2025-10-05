#include "main.ih"

void quickSort(char *strArray[], size_t const left, size_t const right)
{
    if (left < right)
    {
        size_t pivotIdx = partition(strArray, left, right);
        
        if (pivotIdx > left)
            quickSort(strArray, left, pivotIdx - 1);
        
        quickSort(strArray, pivotIdx + 1, right);
    }
}
