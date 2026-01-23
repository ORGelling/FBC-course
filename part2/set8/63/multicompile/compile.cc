#include "multicompile.ih"

    // by 

Result MultiCompile::compile(string const &file)
{
    Options const &opt = Options::instance();
    
    //string cflags = opt.cflags();
    
    fs::path objDir = opt.output();
    fs::path errDir = opt.tmp();
    
    fs::path srcPath(file);
    fs::path baseName = srcPath.filename();
    fs::path object = objDir / baseName;
    object.replace_extension(".o");
    
    fs::path errFile = errDir / baseName;
    errFile.replace_extension(".err");
    
    string commands = "g++ -Wall -Werror -std=c++26 -c " + file
                    + " -o " + object.string()
                    + " 2>" + errFile.string();
             
    cout << commands << '\n';
    //CompileFork cmdFork(commands);
    //compileFork.fork();
    Result tmp;
    return tmp;
}
