#include "counter.ih"

size_t Counter::global_count()
{
    return s_global_count;
}
