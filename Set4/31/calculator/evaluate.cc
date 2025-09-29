#include "calculator.ih"

    // by expression.cc 

void Calculator::evaluate() const
{
    switch (d_op)
    {
        case '+':
            cout << d_lhs + d_rhs;
        break;
        case '-':
            cout << d_lhs - d_rhs;
        break;
        case '*':
            cout << d_lhs * d_rhs;
        break;
        case '/':
            cout << d_lhs / d_rhs;
        break;
        case '%':
            cout << static_cast<int>(d_lhs) % static_cast<int>(d_rhs);
        break;
    }
    cout << '\n';
}
