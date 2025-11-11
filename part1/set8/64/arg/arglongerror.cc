#include "arg.ih"

    // by 

bool Arg::argLongError(struct option *options, int const longIdx) const
{      // missing arg   // arg starts with '-' 
    if (not optarg || (optarg[0] == '-' && optind > 1)) 
    {
        cerr << "option --" << options[longIdx].name
                                            << " requires an argument\n";
        
        if (optarg && optarg[0] == '-' && optind > 1) 
            --optind;               // set optind back to proprtly parse next
        
        return true;
    }
    return false;           // This guards against options eating each other
}                           // if -x -y is given for "x:y" optstring
