#ifndef INCLUDED_TEMPLATE04_
#define INCLUDED_TEMPLATE04_

template <typename Function, typename ...Params>
void forwarder(Function &&func, Params &&...params)
{
    func( std::forward<Params>(params)... );
}

#endif
