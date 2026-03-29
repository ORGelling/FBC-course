#include "scanner.ih"

void Scanner::newline()
{
     cout << lineNr() - 1 << ": " << line() << '\n';
     clear();
}
