#ifndef INCLUDED_COMPILEFORK_
#define INCLUDED_COMPILEFORK_
#include "../../64/fork/fork.h"
#include <string>

class CompileFork: public Fork
{
    std::string d_command;
    
    public:
        CompileFork(std::string const &command);

    private:
        void childProcess() override;
        void parentProcess() override;
};
        
#endif
