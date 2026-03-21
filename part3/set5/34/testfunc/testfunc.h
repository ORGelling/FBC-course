#ifndef INCLUDED_TESTFUNC_
#define INCLUDED_TESTFUNC_

#include "checkopidx.i"

template <typename Data, template <typename> class Container> 
    requires CheckOpIdx<Data, Container>
Data const &TestFunc(Container<Data> const &cont)
{
    return cont[0];
}
        
#endif
