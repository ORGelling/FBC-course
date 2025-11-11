#include "value.ih"

void Value::charValue(char const value)
{
    d_value.u_char = value;
    d_token = CHAR;
}
