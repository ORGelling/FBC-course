#include "strings.ih"

    // by 

namespace {
    string emptyString;
    
    string &getEmptyString()
    {
        emptyString.clear();
        return emptyString;
    }
}

string &Strings::safeAt(size_t idx) const
{
    if (idx >= d_data.size())
        return getEmptyString();
    
    return *d_data[idx];
}
