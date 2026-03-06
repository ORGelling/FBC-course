#include "counter.ih"

Counter::Counter()
{
    ++s_global_count;
    ++s_global_actual;
}
