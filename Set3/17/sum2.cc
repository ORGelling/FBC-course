#include "main.ih"

double sum(size_t const argc, char const *argv[], char const *pickDouble)
{
    double doubleSumValue = 0.0;
    for (size_t argIdx = 1; argIdx != argc; ++argIdx)
    {
        double argument = stod(argv[argIdx]);
        doubleSumValue += argument;
    }
    return doubleSumValue;
}
