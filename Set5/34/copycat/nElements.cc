#include "copycat.ih"

    // by duplicate.cc

size_t CopyCat::nElements(char const *const *data)
{
    size_t tempSize = 0;
    while (data[tempSize] != nullptr)
        ++tempSize;
    
    return tempSize;
}
