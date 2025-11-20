// HB: rating: 1

#include <iostream>
#include <string>

using namespace std;

namespace {
    enum { 
    // HB: L x2
        UTF8_CONT_SEQ = 0b11000000,     // First two MSBs, or 192
        // HB: sure, it's sort of the contiuation sequence, but you're only 
        // using it as mask later on
        UTF8_END_SEQ = 0b10000000       // Only MSB, or 128
    };
}

int main()
{
    string line;
    while (getline(cin, line))                  // Read line from input
    {                                           // case of file
        size_t chIndex = line.size(); 
        while(chIndex) // HB: BAK
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
