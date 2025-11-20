#include "value.ih"

    // by 

Value::Value(char const number)
:
    d_token(CHAR)
{
    d_value.u_char = number;
}
