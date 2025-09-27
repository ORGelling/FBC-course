#include "parser/parser.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Parser parser;
    parser.reset();

    double value;
    Parser::Return result;
    while (result = parser.number(&value), result != Parser::EOLN)
    {
        if (result)
            std::cout << value << '\n';
        else
            std::cout << result << '\n';
    }
    return 0;
}
