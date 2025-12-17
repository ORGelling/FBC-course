#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <vector>
#include <string>

class Strings
{
    std::vector<std::string> d_data;
    
    public:
        Strings() = default;            // probably SF
        ~Strings() = default;           //
        
        Strings &operator+=(std::string const &str);
        std::string &operator[](size_t idx);
        std::string const &operator[](size_t idx) const;
        
        size_t size() const;
        size_t capacity() const;
        void resize(size_t newSize);
        void reserve(size_t newCap);
        std::string &at(size_t idx);
        std::string const &at(size_t idx) const;
};

inline std::string &Strings::operator[](size_t idx)
{
    return d_data[idx];
}

inline std::string const &Strings::operator[](size_t idx) const
{
    return d_data[idx];
}

inline size_t Strings::size() const
{
    return d_data.size();
}

inline size_t Strings::capacity() const
{
    return d_data.capacity();
}

inline void Strings::resize(size_t newSize)
{
    d_data.resize(newSize);
}

inline void Strings::reserve(size_t newCap)
{
    d_data.reserve(newCap);
}

inline std::string &Strings::at(size_t idx)
{
    return d_data.at(idx);
}

inline std::string const &Strings::at(size_t idx) const
{
    return d_data.at(idx);
}

#endif
