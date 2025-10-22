#include "value.ih"

    // by 

Value::Value(int const number)
:
    d_token(INT)
{
    d_value.u_int = number;
}
