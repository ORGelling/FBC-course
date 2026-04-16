#include <iostream>
#include "parser/parser.h"

using namespace std;

int main(int argc, char **argv)
try
{
    Parser parser(argv[1]);

    return parser.parse();
}
catch (...)
{
    cerr << "Terminating\n";
    return 1;
}

