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
    
}

void CompileFork::childProcess()
{
    vector<string> args = split();              // not very pretty, but we
    vector<char *> argv;                        // try to avoid leaks while 
                                                // creating a char * array
    for (string &str : args)
        argv.push_back(const_cast<char *>(str.c_str()));
    argv.push_back(0);
    
    redirect(d_errFile);
    
    execvp(argv[0], const_cast<char *const *>(argv.data()));
    
    throw runtime_error{ "CompileFork: execvp failed, errno= "s + 
                                                        to_string(errno) };
}
