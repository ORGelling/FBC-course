#ifndef INCLUDED_INPUT_
#define INCLUDED_INPUT_

#include <iostream>         // maybe not needed
#include <string>
#include <deque>
#include <vector>

class Input
{
    std::deque<unsigned char> d_deque;
    std::istream *d_in;
    size_t d_lineNr;
    std::vector<size_t> d_offsets;
    
    public:
        Input();
        Input(std::istream *iStream, size_t lineNr = 1);
        
        //~Input();
        
        size_t get();
        size_t lineNr() const;
        size_t nPending() const;
        void setPending(size_t nPending);
        void reRead(size_t ch);
        void reRead(std::string const &str, size_t fmIdx);
        void close();
        size_t offset() const;
        
    private:
        size_t next();
        
        enum
        {
            AT_EOF = -1
        };
};
        
#endif
