#include "main.ih"

int main()
{
    Scanner scanner;
    int token = 0;
    string match;
    
    while (true)
    {
        token = scanner.lex();
        match = scanner.matched();
        
        switch (token)
        {
            case 0:
            return 0;
            case IDENT:
                cout << "Ident   : " << match;
            break;
            case INTEGRAL:
                cout << "Integer : " << match;
            break;
            case REAL:
                cout << "Real    : " << match;
            break;
            case OPERATOR:
                cout << "Operator: " << match;
            break;
            case STRING:
                cout << "String  : " << scanner.string();
            break;
            case CHAR:
                cout << "Char    : '" << match.front() 
                     << "' ASCII: " << static_cast<int>(match.front());
            break;
            case BLANKLINE:
                cout << "Blank Line\n";
            break;
        }
        cout << '\n';
    }
}
