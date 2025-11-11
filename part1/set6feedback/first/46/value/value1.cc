#include "value.ih"

    // by 

Value::Value()
:
    d_token(INT)
{
    d_value.u_int = 0;
}
