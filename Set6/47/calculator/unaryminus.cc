#include "calculator.ih"

    // by charunit.cc

Value Calculator::unaryMinus()
{
    Value ret = factor();
    
    switch (ret.token())
    {
        case INT:
            ret.intValue(-ret.intValue());
        break;
        case DOUBLE:
            ret.doubleValue(-ret.doubleValue());
        break;
        default:
            cout << "unary error\n";
        break;
    }
    
    return ret;
}
