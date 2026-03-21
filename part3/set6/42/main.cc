#include "main.ih"

int main()
{
    Scanner scanner;
    while (true)
    {
        switch (scanner.lex())
        {
            case 0:
                return 0;
            case IDENT:
                cout << "Ident   : " << scanner.matched();
            break;
            case INTEGRAL:
                cout << "Integer : " << scanner.matched();
            break;
            case REAL:
                cout << "Real    : " << scanner.matched();
            break;
            case OPERATOR:
                cout << "Operator: " << scanner.matched();
            break;
            case STRING:
                cout << "String  : " << scanner.matched();
            break;
            case CHAR:
                cout << "Char    : '" << scanner.matched().front() 
                            << "' ASCII: "
                            << static_cast<int>(scanner.matched().front());
            break;
        }
        cout << '\n';
    }
}
