#ifndef INCLUDED_MULTICOMPILE_
#define INCLUDED_MULTICOMPILE_
#include "../options/options.h"
#include "../../57/semaphore/semaphore.h"
#include "../compilequeue/compilequeue.h"
#include "../resultsqueue/resultsqueue.h"
#include "../fileparser/fileparser.h"
#include <vector>
#include <thread>
#include <atomic>

class MultiCompile
{
    std::atomic<bool> d_done;
    
    std::vector<std::thread> v_threads;
    
    CompileQueue q_tasks;
    ResultsQueue q_results;
    
    Semaphore s_workToDo;
    Semaphore s_dispatcher;
    
    bool d_madeTmp;
    
    public:
        MultiCompile();
        
        void run();
        
    private:
    // main processes
        void prep();
        void workforce();
        void jobs();
        void results();
    
    // the helpers
        Result compile(std::string const &line);
        void newTask(std::string const &line);
        Result newResult();                     // checks empty + popfront
        void pushResult(std::shared_future<Result> const &sharedResult);
        void worker();
        std::string nextCommand();
};
        
#endif
