// HB: rating: 1
// HB: also see my remarks in the .txt file

#include <iostream>
#include <string>

using namespace std;

int main()                      // HB: basically all comments here are CC
{                                       

    size_t achars = 0;                  // Declaring counters in main 
    size_t echars = 0;                  // scope since they must survive
    size_t ichars = 0;              // the for loops // HB: this is obvious
    // HB: small suggestions: prefer "camelCase" over "flatcase" and
    // HB: give a name that clarifies its use: e.g. `aCount`, `nrAChars` and 
    // `amountA`
        
    // HB: for-loop with multiple lines in the body -> use braces (even if it
    // is technically one statement)

    for (string word; cin >> word;)     // Looping through words in file
// HB: only use for-loops when you know the number of iterations in advance
        for (auto const &letter : word) // Looping through letters in word
// HB: avoid using auto for now (we'll start allowing it in the second half 
// of part II)

            switch (letter)             // Use letters to count iterators 
                                // HB: I'm not sure what you mean by this?
            {
                case 'a':               // merged entrypoint for LC and UC
                case 'A':               // so no falling through 
                            // HB: quite the opposite: you ARE using a 
                            // fallthrough, just an intentional one
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
    
    cout << "# a-chars: " << achars 
        << " # e-chars: " << echars 
        << " # i-chars: " << ichars 
        << '\n';                        // Showing results
}
