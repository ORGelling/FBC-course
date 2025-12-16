#include "lines.ih"

    // by 

Lines::Lines(istream &in)
{
    string line;
    while (getline(in, line) and not line.empty())
        ; // store line in first string vector
}
