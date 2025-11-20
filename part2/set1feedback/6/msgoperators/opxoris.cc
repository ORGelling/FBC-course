#include "msgoperators.ih"

Msg& operator^=(Msg& lhs, Msg rhs)
{
    return lhs = lhs ^ rhs;
}
