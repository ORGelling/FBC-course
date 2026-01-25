#include "fileparser.ih"

    // by 

void (FileParser::*FileParser::s_parseFiles[])() = 
{
    &FileParser::cin,
    &FileParser::args,
    &FileParser::source,
    &FileParser::directory,
    &FileParser::directoryr
};
