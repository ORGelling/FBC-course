#include "main.ih"

int main(int argc, char *argv[])
{
    size_t count = 0;
    
    if (argc == 1)
    {
        usage();
        return 0;
    }
    
    char selector = argv[1][1];
    
    switch (selector)
    {
        case 'c':
            count = countChars();
            cout << "Amount of characters in file: ";
        break;
        case 'w':
            count = countWords();
            cout << "Amount of words in file: ";
        break;
        case 'l':
            count = countLines();
            cout << "Amount of lines in file: ";
        break;
        default:
            usage();
        return 0;
    }
    
    cout << count << '\n';
}
