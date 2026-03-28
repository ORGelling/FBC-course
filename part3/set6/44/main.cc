#include "main.ih"

int main()
{
    Scanner scanner;                // read from cin
                
    while (true)
    {
        switch (scanner.lex())
        {
            case 0:
                scanner.showCounts();
            return 0;
            case NEWLINE:       
            break;
        }
    }
    
}
