#include "multicompile.ih"

    // by 

namespace {
    
    string getCommands(string const &file)
    {
        Options const &opt = Options::instance();
        
        fs::path object = fs::path(opt.output()) / fs::path(file).filename();
        object.replace_extension(".o");
        
        return "g++ -Wall -Werror -std=c++26 -c " + file
               + " -o " + object.string();
    }
    
    string getErrFile(string const &file)
    {
        Options const &opt = Options::instance();
        
        fs::path errFile = fs::path(opt.tmp()) / fs::path(file).filename();
        errFile.replace_extension(".err");
        
        return errFile.string();
    }

}

Result MultiCompile::compile(string const &file)
{
    string commands = getCommands(file);
    string errFile = getErrFile(file);
    
    CompileFork compiler(commands, errFile);
    compiler.fork();
    
    Result ret{ compiler.childExit() == 0, file, errFile };
    
    if (not ret.success)
        d_done = true;
    
    return ret;
}
