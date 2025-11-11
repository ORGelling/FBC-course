#include <iostream>

#include "symbol/symbol.h"
#include "symtab/symtab.h"
#include "value/value.h"
using namespace std;

int main()
{
    Value v;
    std::cout << v.token() << '\n';
    std::cout << v.intValue() << '\n';

    Symbol s("example", 42);
    std::cout << s.ident() << '\n';
    std::cout << s.intValue() << '\n';
    std::cout << (s.compare("hello") == Symbol::LHS_FIRST) << '\n';

    Symtab symtab;
    while (true)
    {
        cout << "? ";  // a prompt

        string line;
        cin >> line;  // get a word

        cout << "inserted " << symtab.find(line).ident()
             << "\n"
                "All symbols:\n";

        std::cout << "DEBUG2" << '\n';
        for (size_t idx = 0, end = symtab.size(); idx != end; ++idx)
            cout << symtab.at(idx).ident() << ' ';

        cout << '\n';
    }
}
