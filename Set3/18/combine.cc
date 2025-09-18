#include "main.ih"

ReturnValues combine(size_t argc, char *argv[])
{
    ReturnValues returnStruct;
    
    size_t argNr = stoul(argv[1]);
    if (argNr <= argc && argNr != 0)
        returnStruct = {true, argNr, argv[argNr - 1]};
    else
        returnStruct = {false, 0, ""};
    
    return returnStruct;
}
