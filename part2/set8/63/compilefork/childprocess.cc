#include "compilefork.ih"

    // by 

namespace {
    
    void redirect(string const &errFile)
    {
        int fd = open(errFile.c_str(), O_WRONLY | O_CREAT | O_TRUNC, 0600);
        if (fd == -1)
            _exit(1);                       // exit ain't that pretty...
    
        dup2(fd, STDERR_FILENO);            // This was a bit off the beaten
        close(fd);                          // path wrt course materials
    }
    
    void createArgv(vector<string> &argsVec, vector<char *> &argvVec)
    {
        for (string &str : argsVec)
            argvVec.push_back(const_cast<char *>(str.c_str()));
        argvVec.push_back(0);
    }
    
}

void CompileFork::childProcess()
{
    vector<string> args = split();              // not very pretty, but we
    vector<char *> argv;                        // try to avoid leaks while 
                                                // creating a char * array
    
    createArgv(args, argv);                 // we need to create a usable
                                            // char ** for g++'s arguments
    
    redirect(d_errFile);                    // pipe error message to tmp file
    
    execvp(argv[0], const_cast<char *const *>(argv.data()));    // run g++
    
    perror("CompileFork: execvp failed");
    exit(1);
}                                   // Throwing here isn't pretty, will not
                                    // be caught by main's handleExceptions,
                                    // but we are sticking to the example
