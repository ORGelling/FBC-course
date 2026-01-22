#include "fileparser.ih"

    // by 

FileParser::FileParser()
{
    (this->*s_parseFiles[Options::instance().mode()])();
}
