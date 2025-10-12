#include "calculator.ih"

    // by parenthesized.cc

bool Calculator::charToken(int ch) const
{
    cout << ch << " " << d_tokenizer.charValue() << '\n';
    return d_tokenizer.token() == CHAR && d_tokenizer.charValue() == ch;
}
