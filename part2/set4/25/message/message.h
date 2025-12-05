#ifndef INCLUDED_MESSAGE_
#define INCLUDED_MESSAGE_

#include "../derived/derived.h"

class Message
{
    Base &d_base;
    
    public:
        explicit Message(Base &base)
        :
            d_base(base)
        {}
        
        void show(std::ostream &out) const
        {
            d_base.hello(out);
        }
};
        
#endif
