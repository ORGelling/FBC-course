#include "strings.ih"

Strings::~Strings()
{
    if (--*d_share == 0)
    {
        delete[] d_str;
        delete d_share;
    }
}
