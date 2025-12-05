#include "strings.ih"

ostream &operator<<(ostream &out, Strings const &str)
{
    return str.insertInto(out);
}
