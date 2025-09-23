#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ++argv;                                 // Skip the program name
    size_t const nrArgs = --argc;
    size_t const nrPermutations = (1 << nrArgs);
    
    for (size_t argSelect = 0; argSelect != nrPermutations; ++argSelect)
    {                                       // Output permutation number
        cout << argSelect + 1 << ":";
                                            // Cycle through input args
        for (size_t argIdx = 0; argIdx != nrArgs; ++argIdx)
        {
            if (argSelect & (1 << argIdx)) 
                cout << " " << argv[argIdx];
        }                                   // We filter which args to show
        cout << '\n';                       // using a bitshifted mask
    }
}
