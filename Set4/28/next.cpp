#include "Line.ih"

// a member std::string next() returning the next substring from the line
// retrieved by getLine() consisting of non-ws characters, and an empty string
// if no such substring is available anymore.
//
// make sure that at every call of next() the begin position of the next
// substring is already known, and that his begin position is equal to
// string::npos if there are no more substrings.
std::string Line::next()
{
    if (d_pos == std::string::npos)
        return "";

    size_t const begin = d_pos;
    size_t const end = d_line.find_first_of(d_ws, begin);

    d_pos = d_line.find_first_not_of(d_ws, end);  // update next position

    return d_line.substr(begin, end - begin);
}
