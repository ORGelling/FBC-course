#include "keyhash.ih"

    // by 

size_t PostalHash::operator()(pair<string, string> const &info)
{
    hash<string> hash;
    return hash(info.first) + hash(info.second);
}
