#ifndef INCLUDED_MSGOPERATORS_
#define INCLUDED_MSGOPERATORS_

#include "../msg/msg.h"

namespace MsgOperators
{
    // mask for safe use/relevant bit selection
    constexpr unsigned int MASK_ALL = static_cast<unsigned>(Msg::ALL);
    
    // cast to unsigned int for safe conversion
    unsigned int toInt(Msg const msg);
    
    // cast back to enum
    Msg fromInt(unsigned const int value);
    
    // the actual helper function we need
    void show(Msg msg);
};

// would be friends or members if this were a proper class:
Msg operator|(Msg lhs, Msg rhs);
Msg operator&(Msg lhs, Msg rhs);
Msg operator^(Msg lhs, Msg rhs);
Msg operator~(Msg target);

Msg& operator|=(Msg& lhs, Msg rhs);
Msg& operator&=(Msg& lhs, Msg rhs);
Msg& operator^=(Msg& lhs, Msg rhs);

bool operator!(Msg msg);
      
#endif
