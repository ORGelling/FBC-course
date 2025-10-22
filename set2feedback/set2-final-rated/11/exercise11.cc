// HB: rating: 1

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    long long input = stoll(argv[1]);   // assume input is given correctly
    
    cout << input << " = ";             // Outputting first part of return

    string binary;
    string values;
    
    unsigned long long mask = 1ULL << (sizeof(input) * 8 - 1);
    // HB: this is simply the MSB: see solutions
                                        // Initialising here for readability
    for (; mask != 0; mask >>= 1)
    {
        long long const bitValue = input & mask;      // Store current bit
        if (bitValue)
        {
            binary += "1";                            // store binary
            values += (values.empty() ?  "" : " + ")  // with or without "+"
                        + to_string(static_cast<long long>(mask));
        }                                             // return signedness
        else // HB: FLOW: usually putting the shorter branch first is more
            binary += "0";                                      // intuitive
    }
    if (values.empty())                     // Lest 0 return an empty string
        values = "0";
    cout << binary << " = " << values << '\n';
}
