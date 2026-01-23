#ifndef INCLUDED_COMPILETASK_
#define INCLUDED_COMPILETASK_
#include "../result/result.h"
#include <future>

using PackagedTask = std::packaged_task<Result (std::string const &cmnds)>;

class CompileTask               
{                               
    std::string d_commands;
    PackagedTask d_task;
    
    public:
        CompileTask() = default;
        CompileTask(std::string const &cmnds, PackagedTask &&tmp);
    
        void operator()();
    
        std::shared_future<Result> result();
};

inline void CompileTask::operator()()
{
    d_task(d_commands);
}
        
inline std::shared_future<Result> CompileTask::result()
{
    return d_task.get_future().share();
}

#endif
