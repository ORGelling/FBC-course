// HB: rating: 0

#include <iostream>
#include <string>

using namespace std;

int main()                              // HB: lots of CC
{
    long long input;                    // Declares input carrier
    cin >> input;                       // Receives input
    
    cout << input << " = ";             // Outputting first part of return

    string binary;                      // Declaring storage strings
    string values;
    for (size_t index = 0; index < (sizeof(input)*8); ++index) // HB: CANON? (you can do some wild stuff with loops in this ex. if you want, but don't use a `<` operator)
    {                       // HB: ^^^^^^^^^^^^^^^^^ this is best put in a const variable or even an enum in an ANS
        auto const result = input & 1;          // Store current bit // HB: `result` is too generic of a name: what does it represent? also, don't use auto
        binary = to_string(result) + binary;    // Append to binary repr. // HB: prepend, since it is in front
        if (result) // HB: multiple lines in body -> curly braces
            values = to_string(1 << index)      // Store numerical value
                + (values != "" ?" + " : "")    // with or without " + "
                  // HB: ^^^^^^ WHEEL: use .empty()

                + values;                       // Append previous values // HB: idem
        
        input = input >> 1;                     // Move on to next bit
        // HB: if you do this every iteration, put it in the for incrementor statement, but:
        // HB: notice how you're changing both index and input every iterations?
        // HB: it's not only inefficient, but also makes the code harder to read.
        // HB: can you solve it while keeping the input const?
        // HB: hint: mask
    }    

    // HB: don't forget to add zero as a special case
    cout << binary << " = " << values << '\n';  // Showing information
}
