#include "strings.ih"

Strings::Strings(Strings &&other)
:
    Strings()
{
    swap(other);
}
