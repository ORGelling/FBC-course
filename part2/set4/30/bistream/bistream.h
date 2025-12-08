#ifndef INCLUDED_BISTREAM_
#define INCLUDED_BISTREAM_

#include "../bistreambuffer/bistreambuffer.h"
#include <ostream>

class BiStream: public std::ostream
{
    BiStreamBuffer d_biSB;
    
    public:
        BiStream(std::ostream &outOne, std::ostream &outTwo);
};
        
#endif
