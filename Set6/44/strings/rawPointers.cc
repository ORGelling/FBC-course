#include "strings.ih"

    // by enlarge.cc

string **Strings::rawPointers(size_t const newCapacity)
{
    return static_cast<string **>(
                    operator new(newCapacity * sizeof(string *)));
}
