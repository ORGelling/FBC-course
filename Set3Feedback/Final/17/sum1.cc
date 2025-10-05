#include "sum.ih"

int sum(size_t const argc, char const *argv[])
{
    int intSumValue = 0; //JB: The 'Value' part is meaningless.
    for (size_t argIdx = 1; argIdx != argc; ++argIdx)
        intSumValue += stoi(argv[argIdx]);
    
    return intSumValue;
}
