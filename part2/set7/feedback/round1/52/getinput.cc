#include "main.ih"

void getInput(int argc, char **argv, ofstream &out, string &text)
{
    if (argc != 3)
        throw 1;

    out.open(argv[1]);
    
    if (not out.is_open())
        throw 2;
    
    text = argv[2];
}
