#include <iostream>
#include "parser/parser.h"

using namespace std;

int main(int argc, char **argv)
try
{
    Parser parser;

    parser.parse();
    
    cout << parser.rules();
}
catch (...)
{
    cerr << "Terminating\n";
    return 1;
}

