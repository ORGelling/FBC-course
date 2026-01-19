#include "workforce.ih"

    // by 

void WorkForce::worker()
{
    s_workForce.notify();           // worker starts
    
    while (true)
    {
        s_workToDo.wait();          // wait for work
        string line;
        if (not another(line))      // fetch line from queue
        {
            s_workForce.notify();   // work done!
            break;
        }
        s_workForce.notify();       // task claimed, queue slot opened up
        
        reverse(line.begin(), line.end());  // process (reverse) line
        
        s_adminReady.wait();        // wait for permission to submit
        d_doneQ.push( line );       // push to finished queue
        s_paperworkToDo.notify();   // notify administrator
    }
}
