#ifndef INCLUDED_CHARS_
#define INCLUDED_CHARS_

#include <ostream>

template <char ...charlist>
struct Chars
{};

template <char ...charlist>
std::ostream &operator<<(std::ostream &out, Chars<charlist...>)
{
    //((out << charlist), ...);
    (..., (out << charlist));
    return out;
}

#endif
