#ifndef INCLUDED_MULTICOMPILE_
#define INCLUDED_MULTICOMPILE_
#include "../options/options.h"
#include "../../57/semaphore/semaphore.h"
#include "../compilequeue/compilequeue.h"
#include "../resultsqueue/resultsqueue.h"
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
    
    bool d_madeTmp;                         // keep track of whether tmp dir
                                            // to be removed at program end
    public:
        MultiCompile();
        
        void run();
        
    private:
    // main processes
        void prep();
        void workforce();
        void jobs();
        void results();
        void cleanup() const;
    
    // the helpers
        Result compile(std::string const &line);
        void newTask(std::string const &line);
        bool newResult(Result &result);
        void worker();
};

#endif
