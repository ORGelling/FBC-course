#include "lines.ih"

    // by 

Lines::Lines(istream &in)
{
    static size_t count = 0;
    ++count;
    static vector<vector<string>> s_data;
    string line;
    while (getline(in, line) and not line.empty())
        ; // store line in first string vector
}
