    // by 

template <typename Map>
template <typename Comparator>
UnorderedSort<Map>::Sorted const &UnorderedSort<Map>::sort(
                                                          Comparator compare)
{
    std::sort(d_sorted.begin(), d_sorted.end(), compare);
    return d_sorted;
}
