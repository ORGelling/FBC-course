#include "strings.ih"

    // by enlarge.cc & strings1.cc & strings2.cc & strings3.cc & strings4.cc

string **Strings::rawPointers(size_t const newCapacity)
{
    return static_cast<string **>(
                    operator new(newCapacity * sizeof(string *)));
}
