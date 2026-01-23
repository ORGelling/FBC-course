#include "multicompile.ih"

    // by 

Result MultiCompile::compile(string const &file)
{
    Options const &opt = Options::instance();
    
    fs::path objDir = opt.output();
    fs::path errDir = opt.tmp();
    
    fs::path srcPath(file);
    fs::path baseName = srcPath.filename();
    fs::path object = objDir / baseName;
    object.replace_extension(".o");             // this kinda too
    
    fs::path errFile = errDir / baseName;       // need this
    errFile.replace_extension(".err");
    
    string commands = "g++ -Wall -Werror -std=c++26 -c " + file
            + " -o " + object.string();
    
    CompileFork compiler(commands, errFile.string());
    compiler.fork();
    
    Result ret{ compiler.childExit() == 0, file, errFile.string() };
    
    if (not ret.success)
        d_done = true;
    
    return ret;
}
