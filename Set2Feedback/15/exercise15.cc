// HB: rating: ?
// HB: good solution; NFT

#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) // HB: PRAR
{                                         
    ++argv;                                 // Skip the program name
    size_t const count = --argc;            // Store # of input arguments       // HB: count -> nrArgs
    size_t const total = (1 << count);      // Find # of permutations           // HB: total -> nrPermutations
                                                                                // HB: see how you don't need comments if your variable names are semantic? :) 
    for (size_t argSet = 0; argSet < total; ++argSet) // HB: CANON
    {                                       // Output permutation number
        cout << argSet + 1 << ":";
                                            // Cycle through input args
        for (size_t argIdx = 0; argIdx < count; ++argIdx)
            if (argSet & (1 << argIdx)) cout << " " << argv[argIdx]; // HB: MS1L
                                            // We filter which args to show
        cout << '\n';                       // using a bitshifted mask
    }
}
