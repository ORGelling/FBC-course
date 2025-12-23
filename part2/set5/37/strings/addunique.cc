#include "strings.ih"

    // by 

void Strings::addUnique(string const &str)
{
    if (find(d_data.begin(), d_data.end(), str) == d_data.end())
        d_data.push_back(str);
}
