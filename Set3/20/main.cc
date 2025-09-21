#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        usage();
        return 0;
    }
    
    char const selector = argv[1][1];
    size_t count = 0;
    string countType;
    
    switch (selector)
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
    
    cout << "Amount of " << countType << " in file: " << count << '\n';
}
