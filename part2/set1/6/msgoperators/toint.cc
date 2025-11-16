#include "msgoperators.ih"

    // by 

unsigned int MsgOperators::toInt(Msg const msg)
{
    return static_cast<unsigned int>(msg);
}
