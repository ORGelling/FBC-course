//JB: 1
#include "quicksort.h"
#include "envconversion/envconversion.h"
#include <iostream>

using namespace std;

extern char const **environ;                    // For environment variables

int main()
{
    char const **env = environ;                 // Copy for safety
    size_t arraySize = envArraySize(env);
    
    string envArray[arraySize];
    makeStringArray(arraySize, envArray, env);
    
    quickSort(envArray, 0, arraySize);       
    
    cout << "Sorted:\n\n";
    
    for (size_t index = 0; index != arraySize; ++index)
        cout << envArray[index] << '\n';        // Show sorted array
}
