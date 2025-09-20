#include "main.ih"

void showQueue(string queue[], size_t queueSize)
{
    for (size_t index = 0; index != queueSize; ++index)
    {
        cout << index + 1 << ": " << queue[index] << '\n';
    }
}
