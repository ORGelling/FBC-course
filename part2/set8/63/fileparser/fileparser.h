#ifndef INCLUDED_FILEPARSER_
#define INCLUDED_FILEPARSER_
#include "../options/options.h"     // for SourceMode and options
#include <iostream>                 // for std::cin default arg
#include <filesystem>
#include <queue>
#include <string>

class FileParser
{
    std::queue<std::string> d_files;
    
    static void (FileParser::*s_parseFiles[])();
    
    public:
        FileParser();
        bool nextFile(std::string &str);
        
    private:
        void cin();
        void cin(std::istream &in = std::cin);
        void args();
        void source();
        void directory();
        void directoryr();
        bool isSource(std::filesystem::directory_entry const &entry) const;
};
        
#endif
