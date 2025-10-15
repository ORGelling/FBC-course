#include "calculator.ih"

    // by 

void Calculator::assign(Value &lhs, Value const &rhs)
{
    if (lhs.token() == IDENT)
    {
        Token name = lhs.token();
        cout << "lhs IDENT " << name << '\n';
    }
    // check is lhs is a symbol, then use for assigning new value to symbol.
    //lhs = rhs;
    nextToken();
}
