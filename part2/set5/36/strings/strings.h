#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <vector>
#include <string>
#include <memory>

// Add Proxy for proper COW

class Strings
{
    class Proxy;                        // fwd declare for at and op[]
    
    std::vector<std::shared_ptr<std::string>> d_data;
    
    public:
        Strings &operator+=(std::string const &str);
        Proxy operator[](size_t idx);
        std::string const &operator[](size_t idx) const;
        
        size_t size() const;
        size_t capacity() const;
        void resize(size_t newSize);
        void reserve(size_t newCap);
        Proxy at(size_t idx);
        std::string const &at(size_t idx) const;
    
    private:
        
        void cow(size_t idx);                       // copy on write
        //std::string &safeAt(size_t idx) const;      // private backdoor
        
        class Proxy                         // proxy to facilitate COW
        {
            friend class Strings;           // Strings to access pvt ctor
            
            Strings *p_owner;
            size_t   p_idx;
            
            Proxy(Strings &str, size_t idx);
            
            public:
                Proxy &operator=(std::string const &rhs);
                Proxy &operator=(std::string &&rhs);
                Proxy &operator=(Proxy const &rhs);
        }
};

inline std::string const &Strings::operator[](size_t idx) const
{
    return *d_data[idx];
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

inline std::string const &Strings::at(size_t idx) const
{
    return *d_data.at(idx);
}

#endif
