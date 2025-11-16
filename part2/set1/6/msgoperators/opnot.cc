#include "msgoperators.ih"

bool operator!(Msg msg)
{
    return msg == Msg::NONE;
}

