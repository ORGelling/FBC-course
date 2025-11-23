#include "tempfile.ih"

    // by 

namespace {
    static const char allowed[] = 
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "1234567890"
        "!@#$%&()-_;[]{}~";

    [[maybe_unused]] static const bool seeded = []      // lambda expr
        {                                               // seed rng
            srandom(chrono::steady_clock::now().time_since_epoch().count());
            return true;
        }();
}

char TempFile::generateChars() const
{
    return allowed[random() % (sizeof(allowed) - 1)];
}
