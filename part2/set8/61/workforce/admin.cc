#include "workforce.ih"

    // by 

void WorkForce::admin(ostream &out)
{
    s_adminReady.notify();
    
    while (true)
    {
        string line;
        s_paperworkToDo.wait();
        if (d_doneQ.empty())
            return;
        line = d_doneQ.front();
        d_doneQ.pop();
        s_adminReady.notify_all();
        
        out << line << endl;
    }
}
