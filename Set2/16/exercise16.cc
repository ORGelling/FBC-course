#include <iostream>
#include <string>

using namespace std;

namespace {
    enum { 
        UTF8_CONT_SEQ = 0b11000000,     // MSB+1, or 192
        UTF8_END_SEQ = 0b10000000       // Only MSB, or 128
    };
}

int main()
{
    string line;
    while (getline(cin, line))                  // Read line from input
    {                                           // case of file
        size_t chIndex = line.size(); 
        while(chIndex)
        {
            size_t nrBytes = 1;
            while ((line[chIndex - 1] & UTF8_CONT_SEQ) == UTF8_END_SEQ)  
            {                       // Check if MSB is set but next is not
                --chIndex;                      // Move to next byte
                ++nrBytes;                      // Store extra byte #
            }
            cout << line.substr(chIndex - 1, nrBytes);
            --chIndex;
        }                       // Show characters without truncating bytes
    cout << '\n';
    }
}
// Two instances of NMN for bitmasks. Global constexpressions?
