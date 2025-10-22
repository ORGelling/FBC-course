#include "value.ih"

    // by 

Value::Value(double const number)
:
    d_token(DOUBLE)
{
    d_value.u_double = number;
}
