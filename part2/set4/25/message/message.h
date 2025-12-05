#ifndef INCLUDED_MESSAGE_
#define INCLUDED_MESSAGE_

#include "../derived/derived.h"

class Message: public Derived
{
    public:
        Message(Base &base)
        :
            Base(base)
        {}
        
        void show()
        {
            this->hello();
        }
};
        
#endif
