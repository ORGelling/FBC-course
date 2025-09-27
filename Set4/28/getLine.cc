#include "Line.ih"

// a member bool getLine() returning true if the line read from cin contains
// non-ws (spaces, tabs) characters;
//
bool Line::getLine()
{
    std::getline(std::cin, d_line);
    d_pos = d_line.find_first_not_of(d_ws);
    return d_pos != std::string::npos;
}
