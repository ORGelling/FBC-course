#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "? ";                   // Prompt to ask for input
    string line;                    // Declaring string
    getline(cin, line);             // Getting input line

    const string blanks = " \t\n\r\f\v";  // spaces, tabs, newlines, etc.
    size_t first = line.find_first_not_of(blanks);
    size_t last  = line.find_last_not_of(blanks);

    cout << '`'
         << (first == string::npos
                ? string()                           // all blanks → empty
                : line.substr(first, last - first + 1)) // trim both ends
         << '\'' << '\n';
}

