#include "strings.ih"

void Strings::swap(Strings &other)
{
    char bytes[sizeof(Strings)];
    memcpy(bytes, this, sizeof(Strings));
    memcpy(this, &other, sizeof(Strings));
    memcpy(static_cast<void *>(&other), bytes, sizeof(Strings));
}   // Casting this one to appease the constructor
