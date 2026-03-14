#ifndef INCLUDED_TYPEIDX_
#define INCLUDED_TYPEIDX_

#include <cstddef>

template <typename Needle, size_t idx, typename ...Haystack>
struct TypeIdx;


template <typename Needle, size_t idx, typename ...Haystack>
struct TypeIdx<Needle, idx, Needle, Haystack...>
{
    enum
    {
        index = idx
    };                                  // Found! This 1 propagates
};                                      // up the recursion chain 


template <typename Needle, size_t idx, typename Hay, typename ...Haystack>
struct TypeIdx<Needle, idx, Hay, Haystack...>
{
    enum
    {
        index = TypeIdx<Needle, idx + 1, Haystack...>::index
    };
};                                      // propagate and increment if found


template <typename Needle, size_t idx>
struct TypeIdx<Needle, idx>
{
    enum
    {
        index = 0
    };                                  // Not found
};


#endif
