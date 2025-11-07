#include "main.ih"

void stats(Arg &arg, string *args)
{
    cerr << "nArgs: " << arg.nArgs() 
        << " | nOptions: " << arg.nOptions() 
        << " | basename: \"" << arg.basename() 
        << "\" | arg(" << args[4] 
        << "): " << (arg.nArgs() == 0 ? "[NONE]" 
                : arg.arg(stoul(args[4]) < arg.nArgs() 
                ? stoul(args[4]) : 0)) << '\n';
}
