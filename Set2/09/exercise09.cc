#include <iostream>
#include <string>

using namespace std;

int main()
{
    size_t aCount = 0; 
    size_t eCount = 0;
    size_t iCount = 0;
    
    string word;
    while (cin >> word)                 // Looping through words in file
    {
        for (char const &letter : word) // Looping through letters in word
        {
            switch (letter)             // Use letter to select iterators
            {
                case 'a':               // Merged entrypoint for LC and UC
                case 'A':               // so intentional falling through
                    ++aCount;           // Count a's
                break;                  
                case 'e':               // Repeat for e's
                case 'E':
                    ++eCount;
                break;
                case 'i':               // Repeat for i's
                case 'I':
                    ++iCount;
                break;
            }                           // No default case needed
        }
    }
    cout << "# a-chars: " << aCount 
        << " # e-chars: " << eCount 
        << " # i-chars: " << iCount 
        << '\n';                        // Showing results
}
