#include "counter.ih"

Counter::~Counter()
{
    --s_global_actual;
}
