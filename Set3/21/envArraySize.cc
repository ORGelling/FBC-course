#include "quicksort.ih"

size_t const envArraySize(char const **env)
{
    size_t arraySize = 0;
    while (env[arraySize] != nullptr)
        ++arraySize;
    
    return arraySize;
}
