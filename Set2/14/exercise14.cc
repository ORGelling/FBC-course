#include <iostream>

using namespace std;

int main()
{
    while (true)                            // Repeat until exit command
    {
        cout << "Enter a value to comupte the sqrt of (<= 0 to stop): ";
        double input;                       // Prompt, initialise,
        cin >> input;                       // and receive input
        
        if (input <= 0) break;              // Program's exit condition
        
        double xZero = 1;                   // Initialising calculation args
        
        size_t count = 1;                   // Starting our loop count
        while (true)
        {                                   // Executing algorithm
            double xOne = xZero + (input - (xZero * xZero)) / (2 * xZero);
                                                // Minimal xOne scope
            if (xZero == xOne) break;       // Break when values align
            
            cout << count << ": x0: " << xZero
                << ", x1 = " << xOne
                << ", sqr is: " << xOne * xOne
                << '\n';                    // Output this step
        
            xZero = xOne;                       // Reassign x0
            ++count;                            // increment count
        }
        
        cout << "sqrt(" << input << ") is " << xZero << '\n';
    }                                   // Show result when done
}
