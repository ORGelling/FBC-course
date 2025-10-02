#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_
#include <iosfwd>
#include <cstddef>

struct CharCount
{
        struct Char
        {
            char ch = '\0';
            size_t count = 0;
        };
        struct CharInfo 
        {
            Char *ptr = nullptr;
            size_t nCharObjects = 0;
        };
        enum ACTION
        {
            APPEND,
            INSERT,
            INC
        };
        
        CharCount();
        void count(std::istream &input);
        ACTION locate(char ch, size_t &index) const;
        CharInfo const &info() const;

    private:
        CharInfo d_data;                                // The data
};

#endif
