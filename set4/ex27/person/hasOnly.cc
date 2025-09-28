#include "person.ih"
#include <string>

bool Person::hasOnly(char const* allowed, std::string const& s)
{
    return s.find_first_not_of(allowed) == std::string::npos;
}

