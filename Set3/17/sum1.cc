#include "ex17.ih"

int sum(int argc, char const *argv[])
{
    int intSumValue = 0;
    for (int argIdx = 1; argIdx != argc; ++argIdx)
    {
        int argument = stoi(argv[argIdx]);
        intSumValue += argument;
    }
    return intSumValue;
}
