#include "calculator.ih"

bool Calculator::expression()
{
    double lhs;
    bool lhsIsInt;
    if (!number(&lhs, &lhsIsInt))
    {
        cout << "Error: expected a number as first operand\n";
        return false;
    }

    // TODO unclear how to use getOperator() here
    // if (!getOperator())
    //     return false;

    string const op = d_parser.next();
    if (!(op == "+" || op == "-" || op == "*" || op == "/" || op == "%"))
    {
        cout << "Error: expected one of '+-*/%' as operator\n";
        return false;
    }

    double rhs;
    bool rhsIsInt;
    if (!number(&rhs, &rhsIsInt))
    {
        cout << "Error: expected a number as second operand\n";
        return false;
    }

    // below is what evaluate() should do
    if (op == "+")
        cout << lhs + rhs << "\n";
    else if (op == "-")
        cout << lhs - rhs << "\n";
    else if (op == "*")
        cout << lhs * rhs << "\n";
    else if (op == "/")
    {
        if (fabs(rhs) < 1e-8)  // rhs is considered zero
        {
            cout << "Error division by zero\n";
            return false;
        }
        cout << lhs / rhs << "\n";
    }
    else if (op == "%")
    {
        if (!lhsIsInt || !rhsIsInt || lhs < 0 || rhs < 0)
        {
            cout << "Error modulo requires non-negative integral operands\n";
            return false;
        }
        cout << size_t(lhs) % size_t(rhs) << "\n";
    }

    return true;
}
