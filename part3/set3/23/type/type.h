#ifndef INCLUDED_TYPE_
#define INCLUDED_TYPE_

#include <cstddef>

template <typename Needle, typename ...Haystack>
class Type
{
    template <size_t idx, typename ...Stack>
    struct TypeIdx;
    
    public:
        enum
        {
            located = TypeIdx<0, Haystack...>::index
        };
};

template <typename Needle, typename ...Haystack>
template <size_t idx, typename ...Stack>
struct Type<Needle, Haystack...>::TypeIdx
{
    enum
    {
        index = 0
    };
};

template <typename Needle, typename ...Haystack>
template <size_t idx, typename ...Stack>
struct Type<Needle, Haystack...>::TypeIdx<idx, Needle, Stack...>
{
    enum
    {
        index = 1 + idx
    };
};

template <typename Needle, typename ...Haystack>
template <size_t idx, typename Hay, typename ...Stack>
struct Type<Needle, Haystack...>::TypeIdx<idx, Hay, Stack...>
{
    enum
    {
        index = TypeIdx<idx + 1, Stack...>::index
    };
};


#endif
