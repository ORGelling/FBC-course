#include "calculator.ih"

    // by term.cc

void Calculator::factor()
{
    return (this->*s_unit[d_tokenizer.token()]());
}
