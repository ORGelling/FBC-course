#include "strings.ih"

void Strings::add(string const &next)
{
    storageArea();

    d_str[d_size++] = new string(next);
}
