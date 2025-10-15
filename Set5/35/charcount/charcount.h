#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_
#include <iosfwd>
#include <cstddef>

struct CharCount
{
        struct Char
        {
            char ch = '\0';
            size_t count = 1;           // Only initialised when ch found
        };
        struct CharInfo 
        {
            Char *ptr = nullptr;
            size_t nCharObjects = 0;
        };
        enum Action
        {
            APPEND,
            INSERT,
            INC
        };
        
        void count(std::istream &input);
        Action locate(char const ch, size_t &setAt) const;
        void insertChar(size_t const index, char const ch);
        CharInfo const &info() const;
        
    private:
        CharInfo d_data;                    // The data
};

#endif
