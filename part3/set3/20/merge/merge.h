#ifndef INCLUDED_MERGE_
#define INCLUDED_MERGE_

#include "../../19/chars/chars.h"       // previous exercise

                                        // placed here for simplicity
template <char One>                     
struct OneChar                          // doesn't need contents
{};                                     // param packs just pass type info


template <typename Lhs, typename Rhs>
struct Merge
{
    using CP = Chars<>;
};


template <char ...Lhs, char ...Rhs>
struct Merge<Chars<Lhs...>, Chars<Rhs...>>
{
    using CP = Chars<Lhs..., Rhs...>;
};


template <char ...Lhs, char Rhs>
struct Merge<Chars<Lhs...>, OneChar<Rhs>>
{
    using CP = Chars<Lhs..., Rhs>;
};


#endif
