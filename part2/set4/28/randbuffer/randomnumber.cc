#include "randbuffer.ih"

    // by 

int RandBuffer::randomNumber() const        // purely a small refactor
{
    long tmp = d_end;                       // avoiding do/while
    while (tmp >= d_end)                    // using d_end/d_range
        tmp = random();                     // to prevent rng bias

    return d_min + static_cast<int>(tmp % d_range);
}                                   // returning an int here to not expose
                                    // users to #include <string> in the .h
