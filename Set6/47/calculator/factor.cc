#include "calculator.ih"

    // by term.cc

Value Calculator::factor()
{
    return (this->*s_unit[d_tokenizer.token()])();
}
