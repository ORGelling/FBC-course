#include "multicompile.ih"

    // by 

void MultiCompile::cleanup() const
{
    // remove errors.log
    string tmpDir = Options::instance().tmp();
    
    // remove tmpdir only if it has a specified value
    if (d_madeTmp and not tmpDir.empty())
        fs::remove(tmpDir);
}
