#include "interactive.ih"

    // by 

namespace {
    
    bool parsedCutoff(size_t &cutoff, string const &input)
    try 
    {
        cutoff = stoul(input);
        return true;
    }
    catch (...)
    {
        cerr << "Invalid input: " << input << '\n';
        return false;
    }

}

bool Interactive::filterByCount(MailData &tmpData, string const &input) const
{
    size_t cutoff;
    if (not parsedCutoff(cutoff, input))
        return false;
    
    for (auto it = tmpData.begin(); it != tmpData.end(); )
    {
        if (it->second.count >= cutoff)         // we select the given count.
            ++it;                               // 
        else                                    // 
            it = tmpData.erase(it);             // 
    }
    return true;
}
