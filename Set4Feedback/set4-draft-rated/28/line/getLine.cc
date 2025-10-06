#include "line.ih"

bool Line::getLine()
{
    // HB: what if getline fails? i.e. return false
    getline(cin, d_line);
    d_position = d_line.find_first_not_of(" \t");
    
    return d_position != string::npos;
}
