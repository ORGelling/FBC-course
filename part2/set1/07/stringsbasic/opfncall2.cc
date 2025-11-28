#include "strings.ih"

Strings const &Strings::operator()(
                void (*manip)(ostream &out, Strings const &str, size_t index)
)
{
    d_manip = manip;
    return *this;
}
