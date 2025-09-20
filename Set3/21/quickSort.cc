#include "main.ih"

void quickSort(char *strArray[], size_t left, size_t right)
{
    if (left < right)
    {
        size_t index = partition(strArray, left, right);
        
        quickSort(strArray, left, index - 1);
        quickSort(strArray, index + 1, right);
    }
}
