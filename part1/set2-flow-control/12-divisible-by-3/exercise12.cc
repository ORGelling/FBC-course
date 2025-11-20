#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;                       // Handle input
    cin >> input;
    
    while (input.length() > 1)          // Loop sum until 1 digit left
    {
        size_t sum = 0;                     // Reset sum every loop
        for (char const &letter : input)    // Loop over character
            sum += letter - '0';            // Sum numerical value
        input = to_string(sum);             // Use 'input' to store 'sum'
    }
    
    cout << "\""
        << (string{3, 6, 9}.find(input[0] - '0')    // Find 3, 6, or 9 
                == string::npos                     // npos for not found
                ? "not " : "")
        <<  "divisible by 3" << '\n';       // Return output
}
