#include "line.ih"

string Line::next()
{
    if (d_position == string::npos)
        return "";
                                                        // Find next ws 
    size_t endPosition = d_line.find_first_of(" \t", d_position);
    string subString = d_line.substr(d_position, endPosition - d_position);
                                                        // Cut next substring
    d_position = d_line.find_first_not_of(" \t", endPosition);
                                        // set d_pos to next non ws position
    return subString;                   // *Then* return and end function
}
