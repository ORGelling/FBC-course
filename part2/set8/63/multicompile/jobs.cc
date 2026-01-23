#include "multicompile.ih"

    // by 

void MultiCompile::jobs()
{
    FileParser lines;
    while (true)
    {
        string name;
        if (not lines.nextFile(name))
        {
            d_done = true;
            break;
        }
        
        s_dispatcher.wait();
        
        if (d_done.load())
            break;
        
        newTask(name);
        
        s_workToDo.notify_all();
    }
    s_workToDo.notify_all();
}
