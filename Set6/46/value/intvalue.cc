#include "value.ih"

void Value::intValue(int const value)
{
    d_value.u_int = value;
    d_token = INT;
}
