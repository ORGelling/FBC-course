#ifndef ORDER_SORT_HEADER_
#define ORDER_SORT_HEADER_

#include <iosfwd>

void generateQueue
(
    std::string queue[], 
    size_t const queueSize, 
    size_t const colourPercentage
);
void orderSort(std::string queue[], size_t const queueSize);
void showQueue(std::string queue[], size_t const queueSize);
void usage();

#endif
