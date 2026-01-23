#include "multicompile.ih"

    // by 

void MultiCompile::prep()
{
    string const tmpDir = Options::instance().tmp();
    string const outputDir = Options::instance().output();
    
    if (not tmpDir.empty())
        d_madeTmp = fs::create_directories(tmpDir);
    
    if (not outputDir.empty())
        fs::create_directories(outputDir);
}
