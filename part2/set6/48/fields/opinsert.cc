#include "fields.ih"

    // by 

ostream &operator<<(ostream &out, pair<string, Fields> const &line)
{
    return out << line.first << " "
               << line.second.count << " " 
               << line.second.epoch_seconds << " "
               << line.second.date << " "
               << line.second.time << '\n';
}
