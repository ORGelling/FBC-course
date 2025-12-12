#include "bistream.ih"

    // by 

BiStream::BiStream(ostream &outOne, ostream &outTwo)
:
    ostream(&d_biSB),
    d_biSB(outOne, outTwo)
{}
