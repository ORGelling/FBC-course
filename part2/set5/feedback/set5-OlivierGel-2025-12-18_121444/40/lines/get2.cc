#include "lines.ih"

    // by 

namespace {
    vector<string> emptyReturn;
}

vector<string> const &Lines::get(size_t idx) const
{
    LinesData &container = dataContainer();         // retrieve data
    
    for (auto const &[key, value] : container)
    {
        if (value.first == idx)                     // find idx
            return value.second;                    // return contents
    }
    
    emptyReturn.clear();
    return emptyReturn;
}
