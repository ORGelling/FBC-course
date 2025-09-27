#ifndef LINE_H_
#define LINE_H_

#include <string>

class Line
{
    std::string d_line;
    size_t d_pos = 0;
    std::string const d_ws = " \t\n\r\f\v";

public:
    bool getLine();
    std::string next();
};

#endif  // LINE_H_
