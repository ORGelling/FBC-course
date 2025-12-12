#ifndef INCLUDED_RANDBUFFER_
#define INCLUDED_RANDBUFFER_

#include <streambuf>

class RandBuffer: public std::streambuf
{
    int const d_min;            // could be size_t's
    int const d_range;          // if we do not need 
    int const d_end;            // negative numbers
    char     *d_buffer;
    
    public:
        RandBuffer(int min, int max, size_t seed);
        ~RandBuffer() override;
    
    protected:
        std::streambuf::int_type underflow() override;
        
    private:
        int randomNumber() const;       // amend for size_t
};

#endif
