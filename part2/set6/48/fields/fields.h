#ifndef INCLUDED_FIELDS_
#define INCLUDED_FIELDS_

#include <string>
#include <utility>
//#include <chrono>             // too complex to parse values sadly

struct Fields 
{
    size_t      count;
    std::size_t epoch_seconds;              // full epoch seconds
    std::string date;                       // date only
    std::string time;                       // time only
};

// extraction op for istream_iterator<pair>
std::istream &operator>>(std::istream &in, 
                                std::pair<std::string, Fields> &line);
std::ostream &operator<<(std::ostream &out, 
                                std::pair<std::string, Fields> const &line);

#endif
