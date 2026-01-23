#include "multicompile.ih"

    // by 

void MultiCompile::jobs()
{
    FileParser lines;
    while (true)
    {
        string name;
        if (not lines.nextFile(name))       // nextFile works like getline,
        {                                   // this ends file input when 
            d_done = true;                  // the fileparser is done. 
            break;
        }
        
        s_dispatcher.wait();
        
        if (d_done.load())                  // This together with d_done 
            break;                          // replace use and need of the
                                            // queue object's setFinished()
        newTask(name);
        
        s_workToDo.notify_all();
    }
    s_workToDo.notify_all();                // notifies next worker on exit
}                                           // so they can all break out
