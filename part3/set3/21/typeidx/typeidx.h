#ifndef INCLUDED_TYPEIDX_
#define INCLUDED_TYPEIDX_

#include <cstddef>

template <typename Needle, size_t idx, typename ...Haystack>
struct TypeIdx
{
    enum
    {
        index = 0
    };                                  // base case, only triggers
};                                      // if not found at all

template <typename Needle, size_t idx, typename ...Haystack>
struct TypeIdx<Needle, idx, Needle, Haystack...>
{
    enum
    {
        index = 1
    };                                  // Found! This 1 propagates
};                                      // up the recursion chain 

template <typename Needle, size_t idx, typename Hay, typename ...Haystack>
struct TypeIdx<Needle, idx, Hay, Haystack...>
{
    enum
    {
        index = TypeIdx<Needle, idx + 1, Haystack...>::index == 0 ? 0 : 
                            1 + TypeIdx<Needle, idx + 1, Haystack...>::index
    };                                  // keep 0 if not found at all
};                                      // propagate and increment if found

#endif
