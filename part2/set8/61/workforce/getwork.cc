#include "workforce.ih"

    // by 

void WorkForce::getWork(istream &in)
{
    string line;
    while (getline(in, line))
    {
        s_workForce.wait();
        {
            lock_guard<mutex> lg{ d_workMutex };
            d_workQ.push(line);
        }
        s_workToDo.notify_all();
    }
}
