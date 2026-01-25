#include "fileparser.ih"

    // by 

FileParser::FileParser()
{
    (this->*s_parseFiles[Options::instance().mode()])();
}                                       // We use the array of fn pointers to 
                                        // fill our queue from which we hand
                                        // the file names to the Jobs fn
