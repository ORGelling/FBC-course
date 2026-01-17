#include "interactive.ih"

    // by 

namespace {
    
    bool noExit(string &input)
    {
        cout << "? ";
        if (not getline(cin, input) or input.empty())
            return false;
        
        return true;
    }
    
}

void Interactive::session()
{
    string input;
    while (true)
    {
        if (not noExit(input))
            break;
        
        unordered_map wip(d_data);
    
        if ((this->*s_filterData[selectFilter(input)])(wip, input))
        {
            d_data.swap(wip);
            show(); 
        }
    }
}
