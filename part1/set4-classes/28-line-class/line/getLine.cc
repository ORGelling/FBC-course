#include "line.ih"

bool Line::getLine()
{
    if (!getline(cin, d_line))
        return false;
    
    d_position = d_line.find_first_not_of(" \t");
    
    return d_position != string::npos;
}
