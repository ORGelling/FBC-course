#include "maxfour.ih"

    // by 

MaxFour::~MaxFour()
{
    --s_count;
    cerr << "Calling destructor  on: " << d_number << '\n';
}
