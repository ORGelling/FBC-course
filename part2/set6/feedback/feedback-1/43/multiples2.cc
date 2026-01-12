#include "main.ih"

size_t multiples2(vector<size_t> const &vs)
{   // ES: avoid auto
    // ES: NSC
    vector<size_t> vsCopy = vs;
    auto removed = unique(vsCopy.begin(), vsCopy.end());
    
    return vsCopy.end() - removed;
}

