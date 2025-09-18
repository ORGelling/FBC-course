#include "main.ih"

ReturnValues combine(size_t argc, char *argv[])
{
    ReturnValues returnStruct;
    
    size_t argNr = stoul(argv[1]);
    if (argNr < argc && argNr != 0)
    {
        returnStruct.ok = true;
        returnStruct.nr = argNr;
        returnStruct.value = argv[argNr - 1];
    }
    else
    {
        returnStruct.ok = false;
        returnStruct.nr = 0;
        returnStruct.value = "ERROR";
    }
    
    return returnStruct;
}
