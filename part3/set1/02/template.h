#ifndef INCLUDED_TEMPLATE02_
#define INCLUDED_TEMPLATE02_

template <typename To, typename From>
To as(From &&from)
{
    return static_cast<To>(from);
}

#endif
