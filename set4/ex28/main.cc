#include "line/line.h"
#include <iostream>
#include <string>

int main()
{
    Line ln;
    std::string tok;

    // process every line until EOF
    while (ln.getLine())
        while (!(tok = ln.next()).empty())
            std::cout << tok << '\n';
}

