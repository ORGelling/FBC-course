#include "workforce.ih"

    // by 

bool WorkForce::another(string &line)
{
    lock_guard<mutex> lg{ d_workMutex };
    if (d_workQ.empty())
        return false;
    line = d_workQ.front();
    d_workQ.pop();
    return true;
}
