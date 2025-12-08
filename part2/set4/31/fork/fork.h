#ifndef INCLUDED_FORK_
#define INCLUDED_FORK_

#include <iosfwd>
#include <unistd.h>     // for fork

class Fork
{
    pid_t d_pid;
    
    public:
        Fork();
        
        Fork(Fork const &) = delete;
        Fork(Fork &&) = delete;
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

inline pid_t Fork::pid() const
{
    return d_pid;       // return current pid. Should distinguish child/prnt
}

#endif
