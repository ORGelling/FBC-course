#ifndef SUM_HEADER
#define SUM_HEADER

#include <initializer_list>

int sum
    (
        int argc, 
        char const *argv[], 
        std::initializer_list<int> intList
    );

double sum
    (
        int argc, 
        char const *argv[], 
        std::initializer_list<double> doubleList
    );

#endif
