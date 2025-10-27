#include "strings.ih"

void Strings::iterate(char **environLike)
{
    delete[] d_str;
    d_str = nullptr;
    d_size = 0;
    while(*environLike != nullptr)
    {
        string envVariable = *environLike;
        add(envVariable);
        ++environLike;
    }
}
