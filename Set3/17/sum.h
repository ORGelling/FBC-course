#ifndef SUM_HEADER_
#define SUM_HEADER_

#include <iosfwd>

bool findDouble(size_t const argc, char const *argv[]);
int sum(size_t const argc, char const *argv[]);         // sum1.cc
double sum(size_t const argc, char const *argv[], char const *pickDouble);
                                                        // sum2.cc
#endif
