#include "calculator.ih"

bool Calculator::expression()
{
    // The calculator merely performs the calculations, and shows the values
    // of the entered expressions, or an error message if a line is
    // incorrectly formatted or if the expression itself is invalid (like
    // divisions or modulo computations where the right-hand side (rhs)
    // operands are zero. Operands are considered zero if their absolute
    // values are less than 1e-8. In addition, the operands of modulo
    // computations must be non-negative integral values.

    double lhs;
    bool lhsIsInt;
    if (!number(&lhs, &lhsIsInt))
    {
        cout << "Error: expected a number as first operand\n";
        return false;
    }

    string const op = d_parser.next();
    if (!(op == "+" || op == "-" || op == "*" || op == "/" || op == "%"))
    {
        cout << "Error: expected one of '+-*/%' as operator\n";
        return false;
    }

    // if (!getOperator()) // ?? TODO what for?
    //     return false;  // expected an operator

    double rhs;
    bool rhsIsInt;
    if (!number(&rhs, &rhsIsInt))
    {
        cout << "Error: expected a number as second operand\n";
        return false;
    }

    // For parsing input lines the class has a member bool expression(), which
    // uses a member bool number(double *dest, bool *isInt) to parse the next
    // line element as a number and bool getOperator() which returns true if the
    // next line element is a valid operator. If expression() returns true then
    // evaluate() performs the requested computation, inserting the expression's
    // value in cout.

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
            cout
                << "Error modulo requires non-negative integral operands, with "
                   "the right-hand side operand being strictly positive\n";
            return false;
        }
        cout << size_t(lhs) % size_t(rhs) << "\n";
    }

    return true;
}
