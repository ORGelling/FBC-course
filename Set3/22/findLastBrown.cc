#include "orderSort.ih"

size_t findLastBrown(string const queue[], size_t const queueSize)
{
    size_t lastBrown = 0;
    for (size_t checkBrown = 0; checkBrown != queueSize; ++checkBrown)
    {
        if (queue[checkBrown] == "Brown")
            lastBrown = checkBrown;
    }
    return lastBrown;
}
