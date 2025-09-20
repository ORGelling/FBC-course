#include "main.ih"

extern char **environ;

int main()
{
    size_t arraySize = 0;
    char **env = environ;
    
    while(env[arraySize] != nullptr)
    {
        cout << env[arraySize] << '\n';
        ++arraySize;
    }
    quickSort(environ, 0, arraySize - 1);
    
    cout << "\nnew order:\n\n";
    
    for (size_t index = 0; index != arraySize; ++index)
        cout << environ[index] << '\n';
}
