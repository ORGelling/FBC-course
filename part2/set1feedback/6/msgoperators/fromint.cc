#include "msgoperators.ih"

    // by 

Msg MsgOperators::fromInt(unsigned const int value)
{
    return static_cast<Msg>(value & MASK_ALL);
}
