#include "compilefork.ih"

    // by 

void CompileFork::childProcess()
{
    vector<string> args = split();              // not very pretty, but we
    vector<char *> argv;                        // try to avoid leaks while 
                                                // creating a char * array
    for (string &str : args)
        argv.push_back(const_cast<char *>(str.c_str()));
    argv.push_back(0);
    
    execvp(argv[0], const_cast<char *const *>(argv.data()));
    
    throw runtime_error{ "CompileFork: execvp failed, errno= "s + 
                                                        to_string(errno) };
}
