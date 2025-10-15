#include "copycat.ih"

    // by CopyCat3.cc 

char **CopyCat::duplicate(char const *const *data, size_t const arraySize)
{
    char **newData = new char *[arraySize + 1]();
    
    for (size_t index = 0; index != arraySize; ++index)
        newData[index] = ntbsCopy(data[index]);
    
    newData[arraySize + 1] = nullptr;
    
    return newData;
}
