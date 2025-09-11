#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;                       // We use strings here to easily
    cin >> input;                       // cut our input value up
    
    size_t sum;                         // We need sum to persist
    do                                  // Loop sum until 1 digit left
    {
        sum = 0;                        // Set sum to 0 every loop
        for (char& c : input)           // Loop through input per character
            sum += c - '0';             // Sum current character as int
        input = to_string(sum);         // Use input string to store sum
    }
    while (input.length() > 1);         // While input has multiple digits
    
    cout << "\""
        << (string{3, 6, 9}.find(sum)           // Find 3, 6, or 9 
                == string::npos                 // npos for not found
                ? "not " : "")
        <<  "divisible by 3" << '\n';       // Return output
}
