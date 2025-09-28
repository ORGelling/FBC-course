#include "calculator.ih"

void Calculator::run()
{
    while (true)
    {
        cout << "? ";
        if (!getline(cin, d_line))          // EOF ends
            break;
        if (d_line.empty())                 // empty line ends
            break;

        if (expression())
            evaluate();
        else
            cout << "Error: invalid input\n";
    }
}

