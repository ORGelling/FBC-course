#include "counter.ih"

size_t Counter::global_actual()
{
    return s_global_actual;
}
