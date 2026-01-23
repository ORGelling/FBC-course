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
    
    std::vector<std::thread> v_threads;     // v for vector
    
    CompileQueue q_tasks;                   // q for queue
    ResultsQueue q_results;
    
    Semaphore s_workToDo;                   // s for semaphore
    Semaphore s_dispatcher;                 // helps me keep track a bit
    
    bool d_madeTmp;                         // keep track of whether tmp dir
                                            // to be removed at program end
    public:
        MultiCompile();
        ~MultiCompile();
        
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
