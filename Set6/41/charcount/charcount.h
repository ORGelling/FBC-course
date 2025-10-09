#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_
#include <iosfwd>
#include <cstddef>

struct CharCount
{
        struct Char
        {
            char ch = '\0';
            size_t count = 1;               // Only initialised when ch found
            
            Char() = default;
            Char(char const ch);
            Char(Char const &copyChar);     // Copy constructor
        };
        struct CharInfo 
        {
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
        
        CharCount();
        ~CharCount();
        
        void count(std::istream &input);
        Action locate(char const ch, size_t &setAt);
        void appendChar(char const ch, size_t const setAt);
        void insertChar(char const ch, size_t const setAt);
        void includeChar(char const ch, size_t const setAt);
        void enlarge();
        Char *newMemory(size_t const newSize);
        void copyInto(Char *newData);
        void destroy();
        
        size_t capacity() const;
        CharInfo const &info() const;
        
        static void (CharCount::*s_insertChar[])
        (
            char const ch,
            size_t const index 
        );
        
    private:
        CharInfo d_data;                    // The data
};

#endif
