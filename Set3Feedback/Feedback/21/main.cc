//JB: 0
#include "main.ih"

extern char **environ;                          // For environment variables

int main()
{
    size_t arraySize = 0;                       // For finding size
    char **env = environ;

    //JB: BAK, MLR
    while(env[arraySize] != nullptr)            // Find size of environ array
    {
        cout << env[arraySize] << '\n';
        ++arraySize;
    }
    quickSort(environ, 0, arraySize);           // Execute qs       
    
    cout << "\nnew order:\n\n";
    
    for (size_t index = 0; index != arraySize; ++index)
        cout << environ[index] << '\n';
}
