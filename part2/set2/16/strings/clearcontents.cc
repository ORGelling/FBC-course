#include "strings.ih"

    // by 

void Strings::clearContents()
{
    for (size_t index = 0; index != d_size; ++index)
        delete d_str[index];
}
