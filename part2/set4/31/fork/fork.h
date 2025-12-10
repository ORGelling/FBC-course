#ifndef INCLUDED_FORK_
#define INCLUDED_FORK_

//#include <iosfwd>
#include <unistd.h>     // for fork and exit and pid_t

class Fork
{
    pid_t d_pid = -1;                               // init at -1 to signal 
                                                    // not child or parent
    public:
        Fork() = default;
        virtual ~Fork() = default;
        
        Fork(Fork const &) = delete;                // explicitly deleting 
        Fork(Fork &&) = delete;                     // these as PSA/warning
        Fork &operator=(Fork const &) = delete;
        Fork &operator=(Fork &&) = delete;
        
        void fork();
        
    protected:
        pid_t pid() const;              // returns process ID
        int waitForChild() const;       // -to complete, called in parent
        
    private: // public too?
        virtual void parentProcess();   // default empty, actions of parent
        virtual void childProcess() = 0;               // actions of child
                                        // can still implement. Unnecessary


};

//: inline simple members

inline pid_t Fork::pid() const                  // returns 0 if child
{                                               // child's PID if parent
    return d_pid;
}

#endif
