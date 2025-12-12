#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "../base/base.h"

struct Derived: public Base
{
    Derived();
    ~Derived() override;

    private:
        void v_run() override;
        void v_prepare() override;
};
        
#endif

