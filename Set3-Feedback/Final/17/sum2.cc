#include "sum.ih"

double sum(size_t const argc, char const *argv[], char const *pickDouble)
//JB: pickDouble not used, so don't name it, or mark it [[maybe_unused]]
{
    double doubleSumValue = 0.0;
    for (size_t argIdx = 1; argIdx != argc; ++argIdx)
        doubleSumValue += stod(argv[argIdx]);
    
    return doubleSumValue;
}
