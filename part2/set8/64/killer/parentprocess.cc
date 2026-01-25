#include "killer.ih"

    // by 

void Killer::parentProcess()
{
    jthread sentry{                     // we run a watcher thread that
        [this]()
        {
            waitForChild();
            d_semaphore.notify();       // notifies end of child process
        }
    };
    
    if (d_duration) // != 0
    {
        if (not d_semaphore.wait_for(d_duration))
        {
            kill(pid(), SIGKILL);
            waitForChild();                         // can possibly remove
            cout << "Program ended at timeout\n";
            return;
        }                               // could refactor? But seems ok
    }                                   
    else
        d_semaphore.wait();
    
    cout << "Program ended normally\n";
}
