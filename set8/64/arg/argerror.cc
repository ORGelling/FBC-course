#include "arg.ih"

    // by 

bool Arg::argError(int opt) const
{                                           // arg starts with '-'
    if ((optarg && optarg[0] == '-')) 
    {
        cerr << "option -" << char(opt) << " requires an argument\n";
        
        if (optind > 1)
            --optind;       // set optind back to parse next item
        return true;
    }
    return false;           // This guards against options eating each other
}                           // if -x -y is given for "x:y" optstring
