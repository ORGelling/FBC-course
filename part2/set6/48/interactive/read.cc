#include "interactive.ih"

    // by 

namespace {
    
    vector<string> getLines(istream &in)
    {
        vector<string> tmp;
        string line;
        while (getline(in, line))
            tmp.push_back(line);
        
        return tmp;
    }
    
}

void Interactive::read()
{
    ifstream in(d_filename);
    
    if (!in)
        throw runtime_error("Cannot open file: " + d_filename);
    
    vector<string> lines = getLines(in);
    
    d_data.clear();
    
    for_each(lines.begin(), lines.end(),
        [this](string const &line)
        {
            storeLines(line);
        }
    );
}
