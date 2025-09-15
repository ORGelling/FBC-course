#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ++argv;                                 // Skip the program name
    size_t const nrArgs = --argc;
    size_t const nrPerms = (1 << count);
    
    for (size_t argSet = 0; argSet != total; ++argSet)
    {                                       // Output permutation number
        cout << argSet + 1 << ":";
                                            // Cycle through input args
        for (size_t argIdx = 0; argIdx < count; ++argIdx)
        {
            if (argSet & (1 << argIdx)) 
                cout << " " << argv[argIdx];
        }                                   // We filter which args to show
        cout << '\n';                       // using a bitshifted mask
    }
}
