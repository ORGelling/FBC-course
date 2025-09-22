#include "main.ih"

ReturnValues const combine(size_t const argc, char const *argv[])
{
    ReturnValues returnStruct{false, 0, ""};    // Initialise "empty"
    
    size_t argNr = stoul(argv[1]);
    
    if (argNr <= argc && argNr != 0)            // Fill if possible
        returnStruct = {true, argNr, argv[argNr - 1]};
    
    return returnStruct;
}
