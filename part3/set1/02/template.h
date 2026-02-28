#ifndef INCLUDED_TEMPLATE02_
#define INCLUDED_TEMPLATE02_

#include <utility>      // for forward

template <typename To, typename From>
To as(From &&from)
{
    return static_cast<To>(std::forward<From>(from));
}

#endif
