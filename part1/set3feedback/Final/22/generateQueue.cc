#include "orderSort.ih"

void generateQueue
(
    string queue[], 
    size_t const queueSize, 
    size_t const colourPercentage
)
{
    for (size_t index = 0; index != queueSize; ++index)
    {
        size_t colourSelect = random() % 100;
        queue[index] = colourSelect <= colourPercentage ? "Brown" : "Blue";
    }
}
