#include "main.ih"

bool structCall(size_t const argc, char const *argv[])
{
    ReturnValues localStruct = combine(argc, argv);
    
    if (localStruct.ok)
        show(localStruct);
    else
        usage();

    return localStruct.ok;
}
