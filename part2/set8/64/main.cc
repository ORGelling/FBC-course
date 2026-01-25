#include "main.ih"

int main(int argc, char **argv)
try
{
    if (argc < 3)
        throw "Not enough arguments"s;
    
    Killer lineCommisar(argv);              // we inherit p2s4's Fork class!
    lineCommisar.fork();
}
catch (string const &errStr)                
{                                           
    return handleExceptions();
}
