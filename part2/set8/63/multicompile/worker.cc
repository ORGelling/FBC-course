#include "multicompile.ih"

    // by 

void MultiCompile::()
{
    CompileTask task;
    // notify awake?
    while (true)
    {
        s_workToDo.wait();                          // wait for work
        
        if (q_tasks.empty())
             break;
        
        task = q_tasks.popFront();
        s_dispatcher.notify_all();                  // tells dispatch that
                                                    // work can be pushed
        task();
    }
    s_workToDo.notify_all();                        // notify other workers 
}                                                   // that work is done
