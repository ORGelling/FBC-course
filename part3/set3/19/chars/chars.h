#ifndef INCLUDED_CHARS_
#define INCLUDED_CHARS_

#include <ostream>

template <char ...CharList>
struct Chars
{};

template <char ...CharList>
std::ostream &operator<<(std::ostream &out, Chars<CharList...>)
{
    (..., (out << CharList));
    return out;
}

#endif
