#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long input;                    // Declares input carrier
    cin >> input;                       // Receives input
    
    cout << input << " = ";             // Outputting first part of return

    string binary;                      // Declaring storage strings
    string values;
    for (size_t index = 0; index < (sizeof(input)*8); ++index)
    {
        binary = to_string(input & 1) + binary; // Store current bit
        if (input & 1)
            values = to_string(1 << index)      // Store numerical value
                + (values != "" ?" + " : "")    // with or without " + "
                + values;                       // Append previous values
        
        input = input >> 1;                     // Move on to next bit
    }    
    cout << binary << " = " << values << '\n';  // Showing information
}
