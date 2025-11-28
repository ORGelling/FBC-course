#include "msgoperators.ih"

Msg operator^(Msg lhs, Msg rhs)
{
    return MOps::fromInt(MOps::toInt(lhs) ^ MOps::toInt(rhs));
}
