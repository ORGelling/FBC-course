#include "line.ih"

bool Line::getLine()
{
    if (!std::getline(std::cin, d_line))          // EOF or read error
    {
        d_pos = std::string::npos;
        return false;
    }

    d_pos = d_line.find_first_not_of(" \t");      // first non-space/tab
    return d_pos != std::string::npos;
}

