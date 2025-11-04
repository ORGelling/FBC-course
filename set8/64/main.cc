#include "main.ih"

namespace
{
    Arg::LongOption longOptions[] = 
    {
        //Arg::LongOption{"version"},
        Arg::LongOption{"help", 'h'},
        Arg::LongOption{"filename", 'f'},
        Arg::LongOption{"write", 'w'}, // Arg::Required},
        Arg::LongOption{"insert", 'i'},
        Arg::LongOption{"remove", 'r'},
        Arg::LongOption{"display", 'd'},
        Arg::LongOption{"stats", 's'},
    };
    auto longEnd = longOptions + std::size(longOptions);
}   

int main(int argc, char **argv)
{
    //Arg &arg = Arg::initialise("hf:w:i:r:ds:", argc, argv);
    Arg &arg = Arg::initialise("hf:w:i:r:ds:", 
                                        longOptions, longEnd, argc, argv);
    
    string args[5];         // to handle the arguments. Not exactly right for
                            // setting pointers to 0/null if no arg present
    if (arg.option('h'))
        return usage(0);                // show help/usage text
   
    fstream file;
    
    if (arg.option(&args[0], 'f'))              // open or create file
        file.open(args[0], ios::in | ios::app);
    
    if (arg.option(&args[1], 'w') or arg.option('r'))   // write/remove text
        writeremove(arg, file, args);                   // to/from file
    
    if (arg.option('d'))                        // display contents of file
        read(args[0]);
    
    if (arg.option(&args[4], "stats"))
    {
        cout << "nArgs: " << arg.nArgs() 
            << " | nOptions: " << arg.nOptions() 
            << " | basename: \"" << arg.basename() 
            << "\" | arg(" << args[4] 
            << "): " << arg.arg( (stoul(args[4]) < arg.nArgs() 
                    ? stoul(args[4]) : 0)) << '\n';
    }
}
