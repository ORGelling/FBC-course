#include "strings.ih"

void Strings::cow()
{
    // if d_share = 1 just write into current object
    if (*d_share == 1)
        return;
    
    // else copy contents into new object
    freeCopy();
}
