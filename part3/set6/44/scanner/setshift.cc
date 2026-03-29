#include "scanner.ih"

void Scanner::setShift()
{
    size_t newLineNr = stoul(&(matched().front()) + 2);
    d_shift = newLineNr - ScannerBase::lineNr();
}
