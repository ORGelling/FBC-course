#include "main.ih"

size_t multiples2(vector<size_t> const &vs)
{
    vector<size_t> vsCopy = vs;
                                            // tbf auto is used everywhere in
                                            // the annotations for iterators
    vector<size_t>::iterator removed = unique(vsCopy.begin(), vsCopy.end());
                                    // duplicates ordered at end of vector
     
    return vsCopy.end() - removed;  // we use pointer arithmetic to find
}                                   // the length of the duplicate section

