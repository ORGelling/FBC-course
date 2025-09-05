#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    size_t ip4 = 
    (
        (stoul(argv[1]) << 24) |                // Setting first octet
        (stoul(argv[2]) << 16) |                // second octet
        (stoul(argv[3]) << 8) |                 // third
        stoul(argv[4])                          // fourth
    )
    & ~0UL << (32 - stoul(argv[5]));            // apply mask

    cout << ((ip4 >> 24)) << '.'                // read first octet
         << ((ip4 >> 16) & 0xFF) << '.'         // read second
         << ((ip4 >> 8) & 0xFF) << '.'          // read third
         << (ip4 & 0xFF)                        // read fourth
         << '\n';                               // We mask them with 0xFF
                                                // to only read those 8 bits
}
