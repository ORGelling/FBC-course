#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    ++argv;                                 // Skip program name
    size_t const count = --argc;            // Set amount of input arguments
    size_t const total = (1 << count);      // Find number of iterations
    
    for (size_t argSet = 0; argSet < total; ++argSet)
    {                                       // Output line number
        cout << argSet + 1 << ":";
                                            // Cycle through input args
        for (size_t argIdx = 0; argIdx < count; ++ argIdx)
            if (argSet & (1 << argIdx)) cout << " " << argv[argIdx];
                                            // We filter which args to show
        cout << '\n';                       // using a bitshifted mask
    }
}
