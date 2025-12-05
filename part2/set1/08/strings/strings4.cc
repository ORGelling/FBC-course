#include "strings.ih"

Strings::Strings(istream &in)
:
    d_size(0),
    d_str(0),
    d_share(new size_t(1))
{
    string line;
    while (getline(in, line))
        *this += line;
}                               // updated after changing add to op+=
