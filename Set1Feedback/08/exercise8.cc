// ES: 1
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
         << ((ip4 >> 16) & 255) << '.'          // read second
         << ((ip4 >> 8) & 255) << '.'           // read third
         << (ip4 & 255)                         // read fourth
         << '\n';                               // We mask them with '255'
                                                // to only read those 8 bits
}
