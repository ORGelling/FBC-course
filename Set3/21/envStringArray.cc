#include "envconversion.ih"

string *envStringArray
(
    size_t const arraySize, 
    string envArray[], 
    char const **env
)
{
    for (size_t index = 0; index != arraySize; ++index)
        envArray[index] = env[index];
    
    return envArray;
}
