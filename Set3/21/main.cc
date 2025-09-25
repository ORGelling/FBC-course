#include "quicksort.h"
#include "envconversion.h"
#include <iostream>

extern char **environ;                          // For environment variables

int main()
{
    char **env = environ;
    size_t arraySize = envArraySize(env);       // For finding size
    
    string envArray[arraySize];
    envStringArray(arraySize, envArray, env);
    
    quickSort(envArray, 0, arraySize);          // Execute qs       
    
    cout << "\nnew order:\n\n";
    
    for (size_t index = 0; index != arraySize; ++index)
        cout << environ[index] << '\n';
}
