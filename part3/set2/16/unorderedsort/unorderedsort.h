#ifndef INCLUDED_UNORDEREDSORT_
#define INCLUDED_UNORDEREDSORT_

#include <unordered_map>
#include <vector>
#include <algorithm>            // for std::sort

template <typename Map>
class UnorderedSort
{
    using Sorted = std::vector<typename Map::const_iterator>;
    
    Map const d_map;
    Sorted d_sorted;
    
    public:
        UnorderedSort(Map const &map);
        
        Map const &map() const;
        
        Sorted const &sort();                       // sort.i
        
        template <typename Comparator>
        Sorted const &sort(Comparator compare);     // sort2.i
};

#include "unorderedsort1.i"
#include "map.i"
#include "sort.i"
#include "sort2.i"

#endif
