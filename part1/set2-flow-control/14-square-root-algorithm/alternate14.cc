#include <iostream>

using namespace std;

int main()
{
    while (true)                        // to always start the while
    {
        cout << "Enter a value to comupte the sqrt of (<= 0 to stop): ";
        double input;                   // Initialise and handle input
        cin >> input;
        
        if (input <= 0) break;          // Program's exit condition
        
        double xZero = 0;               // Initialising calculation args
        double xOne = 1;                // Values set for proper while entry
        
        size_t count = 1;               // Starting our loop count
        while (xZero != xOne)           // While algorithm is unfinished
        {
            xZero = xOne;               // Assign x0 here to enter while
            xOne = xZero + (input - (xZero * xZero)) / (2 * xZero);
                                        // Execute algorithm
            cout << count << ": x0: " << xZero
                << ", x1 = " << xOne
                << ", sqr is: " << xOne * xOne
                << '\n';                // Output our current values
            ++count;                    // and increment our count
        }
        
        cout << "sqrt(" << input << ") is " << xZero << '\n';
    }                                   // Show result when done
}
