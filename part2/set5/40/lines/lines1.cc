#include "lines.ih"

    // by 

Lines::Lines(istream &in)
{
    LinesData &container = dataContainer();     // retrieve data container
    
    static size_t objectCount = 0;              // number objects

    vector<string> lines;
    string line;
                                                  
    while (getline(in, line) and not line.empty())  // read text data
        lines.push_back(line);                      // store in vector
    
    container.emplace(this, make_pair(objectCount++, move(lines)));
}                                       // add new element to data container
