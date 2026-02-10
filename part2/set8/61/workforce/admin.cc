#include "workforce.ih"

    // by 

void WorkForce::admin(ostream &out)
{
    s_adminReady.notify();
    
    while (true)
    {
        string line;                    
        s_paperworkToDo.wait();                 // wait for admin work
        if (d_doneQ.empty())                    // break if work done
            return;
        line = d_doneQ.front();                 // no mutex or atomic queue
        d_doneQ.pop();                          // since only one admin thr
        s_adminReady.notify_all();              // notify workers that admin
                                                // is available
        out << line << endl;
    }
}
