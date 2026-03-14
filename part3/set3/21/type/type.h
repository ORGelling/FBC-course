#ifndef INCLUDED_TYPE_
#define INCLUDED_TYPE_

#include "../typeidx/typeidx.h"

template <typename Needle, typename ...Haystack>
struct Type
{
    enum
    {
        located = TypeIdx<Needle, 1, Haystack...>::index
    };
};

#endif
