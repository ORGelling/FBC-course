#ifndef INCLUDED_NUMBERS_
#define INCLUDED_NUMBERS_

#include <iosfwd>

class Numbers
{
    size_t d_size;
    int *d_data;
    
    public:
        Numbers();
        Numbers(size_t count);              // uninitialised memory
        Numbers(size_t count, int value);
        Numbers(Numbers const &other);
        Numbers(Numbers &&tmp);
        ~Numbers();
        
        Numbers &operator=(Numbers const &other);
        Numbers &operator=(Numbers &&tmp);
        void swap(Numbers &other);
        
        size_t length() const;
        int const *data() const;
        int &at(size_t index);
        void write(std::ostream &out) const;
        
    private:
        int *allocateMemory(size_t const size);
        void copyFrom(int const *data);
        void setValues(int value);
};

inline size_t Numbers::length() const
{
    return d_size;
}

inline int const *Numbers::data() const
{
    return d_data;
}

#endif
