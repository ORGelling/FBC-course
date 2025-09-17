#include <SumHeader>

int sum(int argc, char const *argv[], initialiser_list<int> intList)
{
    int intSumValue = 0;
    for (int argument : intList)
        intSumValue += argument;
    return intSumValue;
}
