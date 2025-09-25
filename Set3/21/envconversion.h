#ifndef ENVCONVERSION_HEADER_
#define ENVCONVERSION_HEADER_
#include <iosfwd>

size_t envArraySize(char const **env);
std::string *envStringArray
(
    size_t const arraySize, 
    std::string *envArray, 
    char const **env
);

#endif
