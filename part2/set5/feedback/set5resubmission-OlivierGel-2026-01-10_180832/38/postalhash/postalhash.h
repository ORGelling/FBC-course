#ifndef INCLUDED_POSTALHASH_
#define INCLUDED_POSTALHASH_
#include <utility>
#include <string>

struct PostalHash //JB: :-)
{
    size_t operator()(std::pair<std::string, std::string> const &info) const;
};

#endif
