#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <vector>
#include <initializer_list>

class Storage
{
    std::vector<size_t> d_data;

    public:
        Storage() = default;
        Storage(std::initializer_list<size_t> const &list);

        template <typename Tp>
        size_t operator[](Tp idx) const;
        
        template <typename Tp>
        size_t &operator[](Tp idx);
};

template <typename Tp>
inline size_t Storage::operator[](Tp idx) const
{
    return d_data[static_cast<size_t>(idx)];
}

template <typename Tp>
inline size_t &Storage::operator[](Tp idx)
{
    return d_data[static_cast<size_t>(idx)];
}

#endif
