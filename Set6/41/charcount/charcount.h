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
            Char *rawCapacity = nullptr;
            size_t nCharObjects = 0;
            size_t capacity = 8;
        };
        enum Action
        {
            APPEND,
            INSERT,
            INC
        };
        
        void count(std::istream &input);
        Action locate(char const ch, size_t &setAt);
        void appendChar(char const ch, size_t const setAt);
        void insertChar(char const ch, size_t const setAt);
        void includeChar(char const ch, size_t const setAt);
        void enlarge();
        CharInfo const &info() const;
        
        static void (CharCount::*s_insertChar[])
        (
            size_t const index, 
            char const ch
        );
        
    private:
        CharInfo d_data;                    // The data
};

#endif
