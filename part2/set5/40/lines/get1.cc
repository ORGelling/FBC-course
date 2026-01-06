#include "lines.ih"

    // by 

vector<string> const &Lines::get() const
{
    LinesData &container = dataContainer();
    return container[this].second;
}
