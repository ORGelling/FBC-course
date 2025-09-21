#include "main.ih"

int sum(size_t const argc, char const *argv[])
{
    int intSumValue = 0;
    for (size_t argIdx = 1; argIdx != argc; ++argIdx)
    {
        int const argument = stoi(argv[argIdx]);
        intSumValue += argument;
    }
    return intSumValue;
}
