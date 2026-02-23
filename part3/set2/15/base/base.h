#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <utility>

template <typename Derived>
struct Base
{
    template <auto Func, typename ...Args>
    decltype(auto) nc(Args &&...args);
};

#include "nc.i"
        
#endif
