#include "main.ih"

int main()
{
    Parser parser;
    
    parser.parse();
    
    /*
    Scanner scanner;
    
    while (true)
    {
        switch (scanner.lex())
        {
            case 0:
            return 0;
            case Tokens::WRITE:
                cout << "Write found: " << scanner.matched() << '\n';
            break;
            case Tokens::NUMBER:
                cout << "Numbr found: " << scanner.matched() << '\n';
            break;
            case Tokens::IDENT:
                cout << "Ident found: " << scanner.matched() << '\n';
            break;
            case ',':
                cout << "comma\n";
            break;
            case ')':
                cout << "bracket\n";
            break;
            default:
            break;
        }
    }
    */
}
