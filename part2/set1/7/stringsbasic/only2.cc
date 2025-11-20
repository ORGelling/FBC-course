#include "strings.ih"

void only2(ostream &out, Strings const &str, size_t index)
{
    if (index < 2)
        out << str.at(index) << (index < 1 ? ", and: " : "\n");
}
