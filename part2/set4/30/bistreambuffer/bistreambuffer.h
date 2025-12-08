#ifndef INCLUDED_BISTREAMBUFFER_
#define INCLUDED_BISTREAMBUFFER_

#include <iosfwd>
#include <streambuf>

class BiStreamBuffer: public std::streambuf
{
    std::streambuf *d_bufOne;
    std::streambuf *d_bufTwo;
    
    public:
        explicit BiStreamBuffer(std::ostream &outOne, std::ostream &outTwo);
    
    protected:
        std::streambuf::int_type overflow(
                                    std::streambuf::int_type ch) override;
    //  std::streamsize xsputn(char const *buffer, 
    //                                        std::streamsize size) override;
        std::streambuf::int_type sync() override;
        
    private:
};
        
#endif
