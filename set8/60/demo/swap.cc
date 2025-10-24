#include "demo.ih"

    // by 

void Demo::swap(Demo &other)
{
    char buffer[sizeof(Demo)];
    memcpy(buffer, this,   sizeof(Demo));
    memcpy(static_cast<void *>(this),   &other, sizeof(Demo));
    memcpy(static_cast<void *>(&other), buffer, sizeof(Demo));
}
