#include "value.ih"

    // by 

Value::Value(size_t const symbolIndex, Token type = Token::IDENT)
:
    d_token(type)
{
    d_value.u_int = symbolIndex;
}
