#include "orderSort.ih"

void orderSort(string queue[], size_t const queueSize)
{
    for (size_t index = 0; index != queueSize - 1; ++index)
    {
        //JB: COCO
        size_t lastBrown = findLastBrown(queue, queueSize);
        
        string movingPerson = queue[0];     // Person in front moves behind
                                            // last brown eyed queueer
        for (size_t moveIdx = 1; moveIdx != lastBrown + 1; ++moveIdx)
            queue[moveIdx - 1] = queue[moveIdx];    // Everyone in front
                                                    // moves 1 step forward
        queue[lastBrown] = movingPerson;
    }
}
