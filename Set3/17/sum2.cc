#include <SumHeader>

double sum(int argc, char const *argv[], initializer_list<double> doubleList)
{
    double doubleSumValue = 0.0;
    for (double argument : doubleList)
        doubleSumValue += argument;
    return doubleSumValue;
}
