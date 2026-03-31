#include "main.ih"

int main(int argc, char **argv)
{
    Scanner scanner;

    int token;
    while (true)
    {
        token = scanner.lex();
        if (token == 0)
            break;
        cout << token << '\n';
    }
}

