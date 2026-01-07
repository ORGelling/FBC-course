#include "fields.ih"

    // by 

istream &operator>>(istream &in, pair<string, Fields> &line)
{
    return in >> line.first
              >> line.second.count 
              >> line.second.epoch_seconds
              >> line.second.date
              >> line.second.time;
}
