#include "copycat.ih"

    // by duplicate.cc

char *CopyCat::ntbsCopy(char const *data)
{
    size_t const ntbsSize = strlen(data);
    
    char *newNTBS = new char[ntbsSize + 1]();   // alloc NTBS length +1 for
                                                // null terminating char
    for (size_t index = 0; index != ntbsSize; ++index)
        newNTBS[index] = data[index];       // copy data
    
    newNTBS[ntbsSize] = '\0';               // set terminating null
    
    return newNTBS;
}
