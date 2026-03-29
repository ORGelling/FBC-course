#include "scanner.ih"

void Scanner::foundString()
{
    count();                            // tc basically but whatever
    out() << stringAlt();
}
