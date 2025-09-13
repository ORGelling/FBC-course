#include <iostream>
#include <string>

using namespace std;

int main()
{
    for (string line; getline(cin, line);)      // Read line from input
    {                                           // For in case of file
        for (size_t index = line.size(); index > 0; --index)
        {                                       // Loop over all characters 
            size_t bytes = 1;                   // # bytes read
            while ((line[index - 1] & 192) == 128)  // Check if MSB is set
            {                                       // but next one is not
                --index;                        // Move to next byte
                ++bytes;                        // Store extra byte #
            }
            cout << line.substr(index - 1, bytes);  // Show character without
        }                                           // truncating bytes
    cout << '\n';
    }
}
