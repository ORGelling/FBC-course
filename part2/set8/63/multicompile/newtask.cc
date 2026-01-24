#include "multicompile.ih"

    // by 

void MultiCompile::newTask(string const &file)
{
    CompileTask task{ 
        file, 
        CompileTask::PackagedTask(
            [this](string const &line)          // This is the clearest way I 
            {                                   // could find to pass a non
                return compile(line);           // static function to a p_t.
            }                                   // Since compile needs access
        )                                       // to d_done it can't be sttc
    };
    
    d_qResults.push(task.result());
    d_qTasks.push(move(task));
}
