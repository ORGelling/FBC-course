// HB: rating: 1

#ifndef INCLUDED_MAXFOUR_
#define INCLUDED_MAXFOUR_

#include <iosfwd>

class MaxFour
{
    inline static size_t s_count;
    
    size_t d_number; // HB: kind of pointless to define this one as well
    
    public:
        MaxFour();
        ~MaxFour();
};

#endif
