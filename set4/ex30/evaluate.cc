#include "calculator.ih"

void Calculator::evaluate()
{
    bool rhsZero = fabs(d_rhs) < EPS;

    switch (d_op)
    {
        case '+':
            cout << d_lhs + d_rhs << '\n';
            return;

        case '-':
            cout << d_lhs - d_rhs << '\n';
            return;

        case '*':
            cout << d_lhs * d_rhs << '\n';
            return;

        case '/':
            if (rhsZero)
            {
                cout << "Error: division by zero\n";
                return;
            }
            cout << d_lhs / d_rhs << '\n';
            return;

        case '%':
        {
            if (rhsZero)
            {
                cout << "Error: modulo by zero\n";
                return;
            }
            if (!d_lhsIsInt || !d_rhsIsInt || d_lhs < 0.0 || d_rhs < 0.0)
            {
                cout << "Error: modulo needs non-negative integers\n";
                return;
            }
            long long a = static_cast<long long>(llround(d_lhs));
            long long b = static_cast<long long>(llround(d_rhs));
            cout << (a % b) << '\n';
            return;
        }
    }

    cout << "Error: unknown operator\n";
}

