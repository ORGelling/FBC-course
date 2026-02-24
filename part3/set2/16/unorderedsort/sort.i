    // by 

template <typename Map>
UnorderedSort<Map>::Sorted const &UnorderedSort<Map>::sort()
{
    return sort(
        [](auto a, auto b)
        {
            return a->first < b->first;
        }
    );
}
