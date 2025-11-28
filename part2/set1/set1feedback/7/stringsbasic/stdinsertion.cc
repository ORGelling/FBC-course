#include "strings.ih"

void stdInsertion(ostream &out, Strings const &str, size_t index)
{
    out << str.at(index) << str.sep();
}
