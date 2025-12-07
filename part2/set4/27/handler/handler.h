#ifndef INCLUDED_HANDLER_
#define INCLUDED_HANDLER_

#include "../msgenum/msgenum.h"

class Handler: private MsgEnum          // overengineered. See .ih
{
    public:
        Handler() = default;
        ~Handler() = default;

        // member functions
        
    private:
        // helpers etc
};
        
#endif
