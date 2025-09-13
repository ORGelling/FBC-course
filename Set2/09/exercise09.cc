#include <iostream>
#include <string>

using namespace std;

int main()
{
    size_t achars = 0;                  // Declaring counters in main 
    size_t echars = 0;                  // scope since they must survive
    size_t ichars = 0;                  // the for loops
    
    for (string word; cin >> word;)     // Looping through words in file
    {
        for (char &letter : word)        // Loopqng through letters in word
        {
            switch (letter)             // Use letters to count iterators
            {
                case 'a':               // merged entrypoint for LC and UC
                case 'A':               // so no falling through
                    ++achars;           // Count a's
                break;                  
                case 'e':               // Repeat for e's
                case 'E':
                    ++echars;
                break;
                case 'i':               // Repeat for i's
                case 'I':
                    ++ichars;
                break;
            }                           // No default case needed
        }
    }
    
    cout << "# a-chars: " << achars 
        << " # e-chars: " << echars 
        << " # i-chars: " << ichars 
        << '\n';                        // Showing results
}
