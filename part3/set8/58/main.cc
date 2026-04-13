#include <iostream>
#include "parser/parser.h"

using namespace std;

int main()
try
{
    Parser parser;

    return parser.parse();
}
catch (...)
{
    cerr << "Terminating\n";
    return 1;
}

