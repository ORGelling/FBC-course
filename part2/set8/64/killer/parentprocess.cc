#include "killer.ih"

    // by 

void Killer::parentProcess()
{
    jthread sentry{
        [this]()
        {
            waitForChild();
            d_semaphore.notify();       // its count starts at 0
        }
    };
    
    if (d_duration) // != 0
    {
        if (not d_semaphore.wait_for(d_duration))
        {
            kill(pid(), SIGKILL);
            waitForChild();     // can probably remove
            cout << "Program ended at timeout\n";
            return;
        }
    }
    else
        d_semaphore.wait();
    
    cout << "Program ended normally\n";
}
