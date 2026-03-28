#include "scanner.ih"

void Scanner::showCounts() const
{
    cout << "\nIdents : " << d_idents << '\n'
         << "Ints   : " << d_ints << '\n'
         << "Doubles: " << d_doubles << '\n'
         << "Chars  : " << d_chars << '\n';
}
