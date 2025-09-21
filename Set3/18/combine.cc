#include "main.ih"

ReturnValues const combine(size_t const argc, char const *argv[])
{
    ReturnValues returnStruct;
    
    size_t argNr = stoul(argv[1]);
    if (argNr <= argc && argNr != 0)
        returnStruct = {true, argNr, argv[argNr - 1]};
    else
        returnStruct = {false, 0, ""};
    
    return returnStruct;
}
