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
    // check if reading possible
    if (!in)
        throw runtime_error("Cannot open file: " + d_filename);
    
    vector<string> lines = getLines(in);
    
    d_data.clear();
    // gen alg to fill
    for_each(lines.begin(), lines.end(),
        [this](string const &line)
        {
            istringstream iss(line);
            string domain;
            string dateTime;
            Fields data;
            iss >> domain >> data.count >> data.seconds 
                                        >> data.date >> dateTime;
            data.data += " " + dateStr;
            
            d_data[domain] = data;
        }
    );
}
