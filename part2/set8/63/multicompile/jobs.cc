#include "multicompile.ih"

    // by 

void MultiCompile::jobs()
{
    while (true)
    {
        string line = nextCommand(Options::instance().mode());
        if (line.empty())
        {
            d_done = true;
            break;
        }
        
        s_dispatcher.wait();
        
        if (d_done.load())
            break;
        
        newTask(line)
    }
        
}
