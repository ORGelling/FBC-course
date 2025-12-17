#ifndef INCLUDED_LINES_
#define INCLUDED_LINES_
#include <vector>
#include <string>
#include <iosfwd>

class Lines
{   
    public:
        Lines(std::istream &in);
        Lines(Lines const &tmp) = delete;   // deletes other ctors & op='s
        ~Lines();
        
        std::vector<std::string> const &get() const;
        std::vector<std::string> const &get(size_t idx) const;
};
        
#endif
