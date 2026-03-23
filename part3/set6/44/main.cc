#include "main.ih"


namespace
{
    struct Counter
    {
        size_t idents = 0;
        size_t ints = 0;
        size_t doubles = 0;
        size_t chars = 0;
    
        void show() const
        {
            cout << "Idents : " << idents << '\n'
                 << "Ints   : " << ints << '\n'
                 << "Doubles: " << doubles << '\n'
                 << "Chars  : " << chars << '\n';
        }
    };
}


int main()
{
    // read from cin
    Scanner scanner;
    
    // store output lines with nr prepended:
    string line;
    
    // count idents, ints, doubles, chars
    Counter count;
    
    while (true)
    {
        switch (scanner.lex())
        {
            case 0:
                count.show();
                return 0;
            case NEWLINE:
                cout << scanner.lineNr() << ": " << line << '\n';
                line.clear();
            break;
            case WS:
                line.append(scanner.matched());
            break;
            case IDENT:
                ++count.idents;
                line.append(scanner.matched());
            break;
            case INT:
                ++count.ints;
                line.append(scanner.matched());
            break;
            case DOUBLE:
                ++count.doubles;
                line.append(scanner.matched());
            break;
            case CHAR:
                ++count.chars;
                line.append(scanner.matched());
            break;
            default:
            break;
        }
    }
    
}
