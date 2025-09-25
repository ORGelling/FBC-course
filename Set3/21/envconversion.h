#ifndef ENVCONVERSION_HEADER_
#define ENVCONVERSION_HEADER_
#include <iosfwd>

size_t envArraySize(char **env);
std::string *envStringArray(size_t const arraySize, char const **env);

#endif
