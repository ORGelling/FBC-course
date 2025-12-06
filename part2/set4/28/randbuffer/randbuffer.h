#ifndef INCLUDED_RANDBUFFER_
#define INCLUDED_RANDBUFFER_

#include <streambuf>

class RandBuffer: public std::streambuf
{
    int  d_min;         // should be size_t's?
    int  d_range;
    int  d_end;
    char d_buffer;
    
    public:
        RandBuffer(int min, int max, size_t seed);
        ~RandBuffer() override;
    
    protected:
        int_type underflow() override;

    private:
};
        
#endif
