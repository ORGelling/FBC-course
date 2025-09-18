#include "ex17.ih"

double sum(int argc, char const *argv[], char const *pickDouble)
{
    double doubleSumValue = 0.0;
    for (int argIdx = 1; argIdx != argc; ++argIdx)
    {
        double argument = stod(argv[argIdx]);
        doubleSumValue += argument;
    }
    return doubleSumValue;
}
