#ifndef INCLUDED_WORKFORCE_
#define INCLUDED_WORKFORCE_

#include "../../57/semaphore/semaphore.h"
#include <string>
#include <iostream>
#include <queue>

class WorkForce
{
    Semaphore s_workForce;
    Semaphore s_workToDo;
    Semaphore s_adminReady;
    Semaphore s_paperworkToDo;
    
    std::mutex d_workMutex;
    
    std::queue<std::string> d_workQ;
    std::queue<std::string> d_doneQ;
    
    public:
        WorkForce();
        
        void run(std::string const read, std::string const write);  // 1.cc
        void run(std::istream &in, std::ostream &out);              // 2.cc
        
    private:
        void worker();
        void admin(std::ostream &out);
        
        void getWork(std::istream &in);
        
        bool another(std::string &line);
};
        
#endif

// hard coded 2 workers and 1 admin
