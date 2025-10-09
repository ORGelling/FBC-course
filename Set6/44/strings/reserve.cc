#include "strings.ih"

    // by 

void Strings::reserve()
{
    string **newMemory = static_cast<string **>(
            operator new(d_capacity * sizeof(string *)));
    for (size_t idx = 0; idx != d_size; ++idx)
        new (newMemory + idx) string{ *d_data[idx] };
    destroy();
    d_data = newMemory;
}
