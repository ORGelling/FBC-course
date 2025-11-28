#include "tempfile.ih"

    // by 

namespace {
    static const char allowed[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "1234567890"
        "!@#$%&()-_;[]{}~";

    [[maybe_unused]] static const bool seeded = []  // lambda expr to seed rng
        {
            srandom(chrono::steady_clock::now().time_since_epoch().count());
            return true;            // probably TC, can use srandom & now in
        }();                        // ctor but that's c-ish. This has better
}                                   // rng, and Lambdas are in last week's Ch!

char TempFile::generateChars() const
{
    return allowed[random() % (sizeof(allowed) - 1)];
}
