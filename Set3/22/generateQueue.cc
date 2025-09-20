#include "main.ih"

void generateQueue(string queue[], size_t queueSize, size_t colourChance)
{
    for (size_t index = 0; index != queueSize; ++index)
    {
        size_t colourSelect = random() % 100;
        if (colourSelect <= colourChance)
            queue[index] = "Brown";
        else
            queue[index] = "Blue";
    }
}
