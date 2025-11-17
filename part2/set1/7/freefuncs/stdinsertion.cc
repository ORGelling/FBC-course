#include "freefuncs.ih"

void stdInsertion(ostream &out, Strings const &str, size_t index)
{
    out << str.at(index) << str.sep();
}   // can use .d_str[index] too since these are friends for now.
