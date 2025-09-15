#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long input;
    cin >> input;
    
    cout << input << " = ";             // Outputting first part of return

    string binary;
    string values;
    int const bitSize = sizeof(input)*8;
    for (size_t index = 0; index != bitSize; ++index)
    {                   // Use const variable or ANS enums for bitSize!!!
        string const bitValue = to_string(input & 1);  // Store current bit
        binary = bitValue + binary;  // Prepend to binary repr.
        if (result)
        {
            values = to_string(1 << index)      // Store numerical value
                + (values.empty() ?" + " : "")  // with or without " + "
                + values;                       // Prepend previous values
        }
        input = input >> 1;                     // Move on to next bit
    }
    cout << binary << " = " << values << '\n';  // Showing information
} // HB: Add 0 as a special case

// Lots of CC

// HB: if you do this every iteration, put it in the for incrementor 
// HB: statement, but:
// HB: notice how you're changing both index and input every iterations?
// HB: it's not only inefficient, but also makes the code harder to read.
// HB: can you solve it while keeping the input const?
// HB: hint: mask
// 
// I think we can use the mask itself as the iterator?
