// ES: 1
#ifndef INCLUDED_NUMBERS_H_
#define INCLUDED_NUMBERS_H_

#include <iosfwd>
#include <initializer_list>

class Numbers
{
    // insertion operator
    friend std::ostream &operator<<(std::ostream &out, Numbers &nums);
    
    // comparison operators. != is beneath interface
    friend bool operator==(Numbers const &lhs, Numbers const &rhs);
        
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
        
        Numbers &&operator+=(Numbers const &other) &&;  // 1
        Numbers &operator+=(Numbers const &other) &;    // 2
        Numbers &&operator-=(Numbers const &other) &&;  // 1
        Numbers &operator-=(Numbers const &other) &;    // 2
        Numbers &&operator*=(int const other) &&;       // 1
        Numbers &operator*=(int const other) &;         // 2
        Numbers &&operator/=(int const other) &&;       // 1
        Numbers &operator/=(int const other) &;         // 2

        // members of the public interface, like accessors
        
    private:
        // support members for this class, if any
        void setNums(int const value);
        void copyFrom(int const *list);
        
        int &operatorIndex(size_t index) const;
        void boundary(size_t index) const;
        
        void add(Numbers const &other);
        void addContents(Numbers const &other);
        
        void subtract(Numbers const &other);
        void subtractContents(Numbers const &other);

        void multiplyContents(int const other);
        
        bool divisionValid(int const other);
        void divideContents(int const other);
                                                    // helpers for operator==
        static bool compareSize(Numbers const &lhs, Numbers const &rhs);
        static bool compareContents(Numbers const &lhs, Numbers const &rhs);
};

bool operator!=(Numbers const &lhs, Numbers const &rhs);

// binary operators. These do benefit from friend status, but can do w.o.
Numbers operator+(Numbers const &lhs, Numbers const &rhs);          // 1
Numbers operator+(Numbers &&lhs, Numbers const &rhs);               // 2

Numbers operator-(Numbers const &lhs, Numbers const &rhs);          // 1
Numbers operator-(Numbers &&lhs, Numbers const &rhs);               // 2
                                                    // Implementing the next
                                                    // opts move-aware is TC 
                                                    // They will stay simple
Numbers operator*(Numbers lhs, int const rhs);                      // 1
Numbers operator*(int const lhs, Numbers rhs);                      // 2

Numbers operator/(Numbers const &lhs, int const rhs);               // 1
Numbers operator/(Numbers &&lhs, int const rhs);                    // 2


#endif
