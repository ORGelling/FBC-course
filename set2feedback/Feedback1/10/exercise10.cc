// HB: rating: 1

#include <iostream>
#include <string>

using namespace std;

int main()                          // HB: again, lots of CC
{
    cout << "? ";                   // Prompt to ask for input
    string line;                    // Declaring string
    getline(cin, line);             // Getting input line
    
    cout << '`' 
        << line.substr              // Extract relevant part of string
            (                       // starting when blanks end
                line.find_first_not_of(" \t\n\r\f\v"),
                line.find_last_not_of(" \t\n\r\f\v") -
                    line.find_first_not_of(" \t\n\r\f\v") + 1
            )                       // and ending when only blanks left
        << '\'' << '\n';            // +1 for index offset
}
