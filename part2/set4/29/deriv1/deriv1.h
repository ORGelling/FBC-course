#ifndef INCLUDED_DERIV1_
#define INCLUDED_DERIV1_

#include "../basic/basic.h"

class Deriv1: virtual public Basic
{
    public:
        Deriv1();
};

inline Deriv1::Deriv1()
:
    Basic(1)
{}

#endif
