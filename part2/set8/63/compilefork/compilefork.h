#ifndef INCLUDED_COMPILEFORK_
#define INCLUDED_COMPILEFORK_
#include "../../64/fork/fork.h"
#include <vector>
#include <string>

class CompileFork: public Fork
{
    std::string d_command;
    int d_childExit = -1;
    
    public:
        CompileFork(std::string const &command);
        
        int childExit() const;
        std::string const &errorFile() const;
        
    private:
        void childProcess() override;
        void parentProcess() override;
        
        std::vector<std::string> split() const;
};

inline int CompileFork::childExit() const
{
    return d_childExit;
}

#endif
