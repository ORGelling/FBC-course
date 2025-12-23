#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <iosfwd>

class Base
{
    std::ostream &d_out;
    
    public:
        Base(std::ostream &out);    // assigns out to d_out
        
        // other members
};
        
#endif
