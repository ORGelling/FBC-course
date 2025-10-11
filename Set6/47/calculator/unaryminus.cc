#include "calculator.ih"

    // by charunit.cc

Value Calculator::unaryMinus()
{
    Value ret = factor();
    
    switch (ret.token())
    {
        case INT:
            ret.intValue(-ret.intValue());
        case DOUBLE:
            ret.doubleValue(-ret.doubleValue());
    }
    
    return ret;
}
