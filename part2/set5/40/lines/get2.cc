#include "lines.ih"

    // by 

namespace {
    vector<string> emptyReturn;
}

vector<string> const &Lines::get(size_t idx) const
{
    // if idx refers to non existent object
    //if (idx >= (...).size())?
    {
        emptyReturn.clear();
        return emptyReturn;
    }
}
