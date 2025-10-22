#include "calculator.ih"

    // by 

void Calculator::toDouble(Value &rvalue)
{
    rvalue.doubleValue(static_cast<double>(rvalue.intValue()));
    rvalue.setToken(DOUBLE);
}
