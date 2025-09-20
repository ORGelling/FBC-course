#include "main.ih"

extern char **environ;

int main()
{
    size_t arraySize = 0;
    char **env = environ;
    
    while(env[arraySize] != nullptr)
    {
        ++arraySize;
        cout << env[arraySize] << '\n';
    }
    quickSort(environ, 0, arraySize - 1);
    
    cout << "new order:\n";
    
    for (size_t index = 0; index != arraySize; ++index)
        cout << environ[index] << '\n';
}
