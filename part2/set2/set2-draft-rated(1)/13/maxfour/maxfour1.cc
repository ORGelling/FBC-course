#include "maxfour.ih"

    // by 

MaxFour::MaxFour()
{
    if (s_count > 3)
        throw runtime_error{"max. number of objects reached"s};
    
    d_number = ++s_count;
    cout << "Calling constructor on: " << d_number << '\n';
}
