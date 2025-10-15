#include "calculator.ih"

    // by parenthesized.cc

bool Calculator::charToken(int ch) const
{
    return d_tokenizer.token() == CHAR && d_tokenizer.charValue() == ch;
}
