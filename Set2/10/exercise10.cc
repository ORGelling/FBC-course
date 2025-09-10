#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "? ";                   // Prompt to ask for input
    string line;                    // Declaring string
    getline(cin, line);             // Getting input line
    
    cout << '`' 
        << line.substr              // Extract relevant part of string
            (                       // starting when blanks end
                line.find_first_not_of(" "),
                line.find_last_not_of(" ") -
                    line.find_first_not_of(" ") + 1
            )                       // and ending when only blanks left
        << '\'' << '\n';            // +1 for index offset
}
