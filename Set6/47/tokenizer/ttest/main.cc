#include "main.ih"

int main(int argc, char **argv)
{
    Tokenizer tokenizer;

    while (true)
    {
        cout << "? ";
        switch (tokenizer.nextToken())
        {
            default:            // includes QUIT, NOQUIT is irrelevant here
            return 0;

            case CHAR:
                if (char ch = tokenizer.charValue(); ch != '\n')
                    cout << "char: " << ch << '\n';
                else
                    tokenizer.reset();
            break;
               
            case INT:
                cout << "int: " << tokenizer.intValue() << '\n';
            break;

            case DOUBLE:
                cout << "double: " << tokenizer.doubleValue() << '\n';
            break;

            case IDENT:
                cout << "ident: " << tokenizer.ident() << '\n';
            break;
        }
    }
}


