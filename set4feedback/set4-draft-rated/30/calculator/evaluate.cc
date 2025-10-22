#include "calculator.ih"

    // by run.cc 

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
            // HB: TYPE x2
        break;
    }
    cout << '\n';
}
