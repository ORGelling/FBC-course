#include "main.ih"

int main(int argc, char **argv)
{
    Scanner scanner;
    
    while (scanner.lex())
        cout << scanner.matched();
}
