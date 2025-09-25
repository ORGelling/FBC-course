#include "count.h"
#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)                          // Info and correct usage check
    {
        usage();
        return 1;
    }
    
    char const inputFlag = argv[1][1];
    size_t count = 0;
    string countType;                       // auto initialised
    
    switch (inputFlag)
    {
        case 'c':
            count = countChars();
            countType = "characters";
        break;
        case 'w':
            count = countWords();
            countType = "words";
        break;
        case 'l':
            count = countLines();
            countType = "lines";
        break;
        default:
            usage();
        return 0;
    }
    
    cout << "Number of " << countType << " in file: " << count << '\n';
}
