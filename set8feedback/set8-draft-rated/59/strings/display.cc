#include "strings.ih"

void Strings::display() const
{
    for (size_t index = 0; index != d_size; ++index)
        cout << d_str[index] << '\n';
}
