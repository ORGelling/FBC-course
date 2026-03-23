#include "main.ih"


namespace
{
    struct Counter                              // count and show types
    {
        size_t idents = 0;
        size_t ints = 0;
        size_t doubles = 0;
        size_t chars = 0;
    
        void show() const
        {
            cout << "\nIdents : " << idents << '\n'
                 << "Ints   : " << ints << '\n'
                 << "Doubles: " << doubles << '\n'
                 << "Chars  : " << chars << '\n';
        }
    };
}


int main()
{
    Scanner scanner;                // read from cin
                
    string line;                    // store output lines with nr prepended:
    
    Counter count;
    
    while (true)
    {
        switch (scanner.lex())
        {
            case 0:
                count.show();
                return 0;
            case NEWLINE:       
                cout << scanner.lineNr() - 1 << ": " << line << '\n';
                line.clear();         // ^^^ - 1 since at this point the 
            break;                    // scanner has already incrmntd d_line
            case WS:
                line.append(scanner.matched());     // can refactor these
            break;                                  // but a switch inside
            case IDENT:                             // a switch is a bit
                ++count.idents;                     // overdone. This is
                line.append(scanner.matched());     // clear and concise
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
