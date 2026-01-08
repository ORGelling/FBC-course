#include "interactive.ih"

    // by 


void Interactive::read()
{
    ifstream in(d_filename);
    
    if (!in)
        throw runtime_error("Cannot open file: " + d_filename);
    
    d_data.clear();         // not needed probably
    
    for_each(istream_iterator<FullLine>{ in }, istream_iterator<FullLine>{},
        [this](FullLine const &line)
        {
            d_data[line.first] = line.second;
        }                           // This probably isn't MLR I think?
    );                              // Refactoring this seems... unfitting
}
