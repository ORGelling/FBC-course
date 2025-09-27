#include "line.ih"

    // by main.cc

bool Line::getLine()
{
    getline(cin, d_line);
    d_position = d_line.find_first_not_of(" \t");
    
    return d_position != string::npos;
}
