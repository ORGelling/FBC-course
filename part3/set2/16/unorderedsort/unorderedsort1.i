    // by 

template <typename Map>
UnorderedSort<Map>::UnorderedSort(Map const &map)
:
    d_map(map)
{
    d_sorted.reserve(d_map.size());         // refactoring this would be
    for (auto it = d_map.cbegin(); it != d_map.cend(); ++it)
        d_sorted.push_back(it);             // strange since it's a template
}                                           // best to leave it here

                                        // this should also be perfectly
                                        // exception/leak safe!
