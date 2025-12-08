#include "bistreambuffer.ih"

    // by 

BiStreamBuffer::BiStreamBuffer(ostream &outOne, ostream &outTwo)
:
    d_bufOne(outOne.rdbuf()),
    d_bufTwo(outTwo.rdbuf())
{
    // check is null?
}
