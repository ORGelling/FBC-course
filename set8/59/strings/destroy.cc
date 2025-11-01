#include "strings.ih"

void Strings::destroy()
{
    delete[] d_str;
    d_str = nullptr;
    d_size = 0;
}
