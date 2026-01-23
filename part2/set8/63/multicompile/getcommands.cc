#include "multicompile.ih"

    // by 

string MultiCompile::getCommands(string const &file)
{
    Options const &opt = Options::instance();
    
    fs::path objDir = opt.output();
    fs::path errDir = opt.tmp();
    
    fs::path srcPath(file);
    fs::path baseName = srcPath.filename();
    fs::path object = objDir / baseName;
    object.replace_extension(".o");
    
    fs::path errFile = errDir / baseName;
    errFile.replace_extension(".err");
    
    return  "g++ -Wall -Werror -std=c++26 -c " + file
            + " -o " + object.string()
            + " 2>" + errFile.string();
}
