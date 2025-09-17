#include "ex17.ih"

int sum(int argc, char const *argv[], initializer_list<int> intList)
{
    int intSumValue = 0;
    for (int argument : intList)
        intSumValue += argument;
    return intSumValue;
}
