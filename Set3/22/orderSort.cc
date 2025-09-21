#include "main.ih"

void orderSort(string queue[], size_t const queueSize)
{
    for (size_t index = 0; index != queueSize - 1; ++index)
    {
        size_t lastBrown = 0;
        for (size_t checkBrown = 0; checkBrown != queueSize; ++checkBrown)
        {
            if (queue[checkBrown] == "Brown")
                lastBrown = checkBrown;
        }
        
        string movingPerson = queue[0];     // Person in front moves behind
                                            // last bworn eyed queueer
        for (size_t moveIdx = 1; moveIdx != lastBrown + 1; ++moveIdx)
            queue[moveIdx - 1] = queue[moveIdx];    // Everyone inbetween
                                                    // moves 1 step up
        queue[lastBrown] = movingPerson;
    }
}
