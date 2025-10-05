#ifndef SUM_HEADER_
#define SUM_HEADER_

#include <iosfwd> //JB: Way overkill.

bool findDouble(size_t const argc, char const *argv[]);
int sum(size_t const argc, char const *argv[]);         // sum1.cc
double sum(size_t const argc, char const *argv[], char const *pickDouble);
//JB: Dummy do-nothing parameter. Possible, but not ideal.
                                                        // sum2.cc
#endif
