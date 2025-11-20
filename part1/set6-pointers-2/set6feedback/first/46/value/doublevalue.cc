#include "value.ih"

void Value::doubleValue(double const value)
{
    d_value.u_double = value;
    d_token = DOUBLE;
}
