#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_
#include <iosfwd>

class Line
{
    std::string d_line;
    size_t      d_position;
        
    public:
        Line();
        
        bool getLine();
        std::string next();

};
        
#endif
