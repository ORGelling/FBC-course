#include "value.ih"

void Value::requireSpecial(Token const token) const
{
    if (token != QUIT && token != ERROR && token != IDENT)
        std::cerr << "Error: token is not special\n";
}
