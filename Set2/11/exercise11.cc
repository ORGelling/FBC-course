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
        auto const result = input & 1;          // Store current bit
        binary = to_string(result) + binary;    // Append to binary repr.
        if (result)
            values = to_string(1 << index)      // Store numerical value
                + (values != "" ?" + " : "")    // with or without " + "
                + values;                       // Append previous values
        
        input = input >> 1;                     // Move on to next bit
    }    
    cout << binary << " = " << values << '\n';  // Showing information
}
