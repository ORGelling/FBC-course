#include "strings.ih"

Strings::Strings(istream &in)
:
    d_size(0),
    d_data(rawPointers(1))
{
    string line;
    while (getline(in, line))
        add(line);
}
