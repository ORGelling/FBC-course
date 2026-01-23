#include "compilefork.ih"

    // by 

namespace {
    
    void redirect(string const &errFile)
    {
        int fd = open(errFile.c_str(), O_WRONLY | O_CREAT | O_TRUNC, 0600);
        if (fd == -1)
            _exit(1);
    
        dup2(fd, STDERR_FILENO);
        close(fd);
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
    createArgv(args, argv);
    
    redirect(d_errFile);                    // pipe error message to tmp file
    
    execvp(argv[0], const_cast<char *const *>(argv.data()));
    
    throw runtime_error{ "CompileFork: execvp failed, errno= "s + 
                                                        to_string(errno) };
}
