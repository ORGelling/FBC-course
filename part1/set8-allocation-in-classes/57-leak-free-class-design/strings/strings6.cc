#include "strings.ih"

    // Move constructor

Strings::Strings(Strings &&other)
:
    Strings()
{
    swap(other);
}
