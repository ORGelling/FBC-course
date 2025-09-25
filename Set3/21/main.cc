#include "quicksort.h"
#include "envconversion.h"
#include <iostream>

using namespace std;

extern char const **environ;                    // For environment variables

int main()
{
    char const **env = environ;
    size_t arraySize = envArraySize(env);       // For finding size
    
    string envArray[arraySize];
    envStringArray(arraySize, envArray, env);
    
    quickSort(envArray, 0, arraySize);          // Execute qs       
    
    cout << "Sorted:\n\n";
    
    for (size_t index = 0; index != arraySize; ++index)
        cout << envArray[index] << '\n';
}
