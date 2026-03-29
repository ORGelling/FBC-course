#include "main.ih"

int main(int argc, char **argv)
try
{
    Scanner scanner;
    
    while (scanner.lex())
        cout << scanner.matched();
}
catch (...)
{
    throw;  // sloppy, but writing a handleException() is not the goal here
}
