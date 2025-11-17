#ifndef INCLUDED_NUMBERS_H_
#define INCLUDED_NUMBERS_H_

#include <iosfwd>
#include <initializer_list>

class Numbers
{
    // insertion operator
    friend std::ostream &operator<<(std::ostream &out, Numbers &nums);
    // friend std::istream &operator>>(std::istream &in, Numbers &nums);
    
    // comparison operators
    friend bool operator==(Numbers const &lhs, Numbers const &rhs);
    friend bool operator!=(Numbers const &lhs, Numbers const &rhs);
    // != does not have to be a friend.
    
    size_t d_size = 0;
    int *d_nums = 0;
    
    public:
        explicit Numbers(size_t size);                  // 1
        
        Numbers(size_t size, int value);                // 2
        Numbers(size_t size, int *values);              // 3
        Numbers(std::initializer_list<int> iniList);    // 4
        Numbers(Numbers const &other);                  // 5
        Numbers(Numbers &&tmp);                         // 6
        ~Numbers();
        
        void swap(Numbers &other);
        Numbers &operator=(Numbers const &other);       // 1
        Numbers &operator=(Numbers &&tmp);              // 2
        
        int &operator[](size_t index);                  // 1
        int const &operator[](size_t index) const;      // 2

        // members of the public interface, like accessors
        
    private:
        // support members for this class, if any
        void setNums(int const value);
        void copyFrom(int const *list);
        
        int &operatorIndex(size_t index) const;
        void boundary(size_t index) const;
                                                    // helpers for operator==
        static bool compareSize(Numbers const &lhs, Numbers const &rhs);
        static bool compareContents(Numbers const &lhs, Numbers const &rhs);
};

#endif
