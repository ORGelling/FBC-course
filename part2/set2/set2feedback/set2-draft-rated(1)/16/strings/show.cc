#include "strings.ih"

    // by 

void Strings::show()
{
    for (size_t idx = 0; idx != d_size; ++idx)
        cout << "line " << idx + 1 << ": " << *d_str[idx] << '\n';

    cout << "current capacity: " << d_capacity << '\n';
}
