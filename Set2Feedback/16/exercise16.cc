// HB: rating: ?

#include <iostream>
#include <string>

using namespace std;

int main()
{
    for (string line; getline(cin, line);)      // Read line from input
    // HB: only use for-loops when you know the number of iterations in advance
    {                                           // For in case of file
        for (size_t index = line.size(); index > 0; --index) // HB: CANON
        {                                       // Loop over all characters // HB: if you feel you want the clarity: rename `index` to `chIndex` or `byteIdx`?
            size_t bytes = 1;                   // # bytes read // HB: name suggestion: `nrBytesRead`?
            while ((line[index - 1] & 192) == 128)  // Check if MSB is set // HB: two instances of NMN
            {                                       // but next one is not
                --index;                        // Move to next byte
                // HB: conditional incrementing of loop variable -> while-loop

                ++bytes;                        // Store extra byte #
            }
            cout << line.substr(index - 1, bytes);  // Show character without
        }                                           // truncating bytes
    cout << '\n';
    }
}
