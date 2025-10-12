#include "calculator.ih"

    // by term.cc

Value Calculator::factor()
{
    cout << "factor " << d_tokenizer.token() << '\n';
    return (this->*s_unit[d_tokenizer.token()])();
}
