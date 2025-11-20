#include "msgoperators.ih"

Msg operator~(Msg target)
{
    return MOps::fromInt(~MOps::toInt(target) & MOps::MASK_ALL);
}

