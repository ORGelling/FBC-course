#include "address.ih"

    // by main.cc

size_t Address::remove(string const &postalCode)
{
    for (auto iter = d_umap.begin(); iter != d_umap.end(); )
    {
        string const &compareCode = iter->first.first;
        
        if (not compareCode.starts_with(postalCode))    // we iterate through
            ++iter;                                     // the whole umap
        else
            iter = d_umap.erase(iter);                  // and remove matches
    }                                                   // while setting iter
                                                        // to next element
    return d_umap.size();
}                                                       // erase_if()?

// auto sets: unordered_map<PostalInfo, Occupants, PostalHash>::iterator
