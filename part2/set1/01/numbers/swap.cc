#include "numbers.ih"

    // by 

void Numbers::swap(Numbers &other)
{
    char buffer[sizeof(Numbers)];
    memcpy(buffer, this,   sizeof(Numbers));
    memcpy(static_cast<void *>(this),   &other, sizeof(Numbers));
    memcpy(static_cast<void *>(&other), buffer, sizeof(Numbers));
}
