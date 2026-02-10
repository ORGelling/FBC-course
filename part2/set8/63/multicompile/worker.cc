#include "multicompile.ih"

    // by 

void MultiCompile::worker()
{
    CompileTask task;
    while (true)
    {
        d_workToDo.wait();                          // wait for work
        
        if (d_qTasks.empty())
             break;
        
        task = d_qTasks.popFront().value();
        d_dispatcher.notify_all();                  // tells dispatch that
                                                    // work can be pushed
        task();
    }
    d_workToDo.notify_all();                        // notify other workers 
}                                                   // that work is done
