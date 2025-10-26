#include "strings.ih"

void Strings::enlarge()
{
                                        // new block, doubling the # pointers
    string **next = rawPointers(d_capacity);

                                        // copy the existing pointers
    for (size_t idx = 0; idx != d_size; ++idx)
        next[idx] = d_str[idx];

    delete[] d_str;
    d_str = next;
}
