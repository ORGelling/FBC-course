#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_

#include <string>

class Line
{
    std::string              d_line;
    std::string::size_type   d_pos;   // npos => no more substrings

  public:
    Line();

    // true iff the read line contains at least one non-space/tab character
    bool getLine();

    // next non-ws substring from the last read line, or "" if none left
    std::string next();
};

#endif // INCLUDED_LINE_

