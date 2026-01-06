#include "interactive.ih"

    // by 

void Interactive::storeLines(string const &line)
{
    istringstream iss(line);
    string domain;
    Fields data;
    
    iss >> domain 
        >> data.count 
        >> data.epoch_seconds 
        >> data.date 
        >> data.time;
    
    d_data[domain] = data;
}
