#include "value.ih"

    // by 

void Value::requireSpecial(Token const token)
{
    switch (token)
    {
        case QUIT:
        case ERROR:
        case IDENT:
            setToken(token);
        break;
        default:
            cerr << "internal error: forcing token " << token << 
                        " to value QUIT\n";
            d_token = QUIT;
    }
}
