#ifndef INCLUDED_NRTRAIT_
#define INCLUDED_NRTRAIT_



template <int integer>
struct NrTrait
{
    enum 
    {
        value = integer,
        absolute = integer > 0 ? integer : -integer,
        even = integer % 2 == 0,
        by3 = integer % 3 == 0,
        sum_of_digits = (absolute % 10 + NrTrait<absolute / 10>::sum_of_digits)
    };
};

template <>                     // overload for digit sum exit case
struct NrTrait<0>
{
    enum
    {
        value = 0,
        absolute = 0,
        even = 1,
        by3 = 1,
        sum_of_digits = 0
    };
};


#endif
