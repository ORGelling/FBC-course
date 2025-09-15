#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    while (getline(cin, line))                  // Read line from input
    {                                           // For in case of file
        for (size_t chIndex = line.size(); chIndex != 0; --chIndex)
        {                                       // Loop over all characters 
            size_t nrBytesRead = 1;
            while ((line[chIndex - 1] & 192) == 128)  // Check if MSB is set
            {                                         // but next one is not
                --chIndex;                          // Move to next byte
                ++nrBytesRead;                      // Store extra byte #
            }
            cout << line.substr(chIndex - 1, nrBytesRead);
        }                       // Show characters without truncating bytes
    cout << '\n';
    }
}

// Use while loops for all three
// Two instances of NMN for bitmasks
