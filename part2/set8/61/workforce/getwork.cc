#include "workforce.ih"

    // by 

void WorkForce::getWork(istream &in)
{
    string line;
    while (getline(in, line))
    {
        s_workForce.wait();             // wait for workforce to be available
        {
            lock_guard<mutex> lg{ d_workMutex };    // atomically push job
            d_workQ.push(line);
        }
        s_workToDo.notify_all();        // notify that work is to do
    }
}
