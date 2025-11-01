#include "main.ih"

namespace
{
    Arg::LongOption longOptions[] = 
    {
        Arg::LongOption{"help", 'h'},
        Arg::LongOption{"filename", 'f'},
        Arg::LongOption{"write", 'w'}, // Arg::Required},
        Arg::LongOption{"insert", 'i'},
        Arg::LongOption{"remove", 'r'},
        Arg::LongOption{"display", 'd'},
    };
    auto longEnd = longOptions + std::size(longOptions);
}   

int main(int argc, char **argv)
{
    //Arg &arg = Arg::initialise("f:h:v:qx:y:", argc, argv);
    Arg &arg = Arg::initialise("hvf:w:i:r:d", 
                    longOptions, longEnd, argc, argv);
    
    string args[4];
    
    if (arg.option('h'))
        return usage(0);
   
    fstream file;
    
    if (arg.option(&args[0], 'f'))
        file.open(args[0], ios::in);
    
    if (arg.option(&args[1], 'w') or arg.option('r'))
        writeremove(arg, file, args);
    
    if (arg.option('d'))
        read(args[0]);
    
    Arg::cleanUp();
}
