#include "multicompile.ih"

    // by 

void MultiCompile::newTask(string const &file)
{
    CompileTask task{ 
        file, 
        PackagedTask(
            [this](string const &line)
            {
                return compile(line);
            }
        )
    };
    
    q_results.push(task.result());
    q_tasks.push(move(task));
}
