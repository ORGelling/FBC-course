#include "combine.ih"

bool structCall(size_t const argc, char const *argv[])
{
    ReturnValues const localStruct = combine(argc, argv);
    
    if (localStruct.ok)
        show(localStruct);
    else
        usage();

    return localStruct.ok;
}
