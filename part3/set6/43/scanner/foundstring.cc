#include "scanner.ih"

void Scanner::foundString()
{
    count();                            // tc basically but whatever
    begin(StartCondition_::INITIAL);
    out() << stringAlt();
}
