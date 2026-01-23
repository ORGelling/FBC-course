#include "multicompile.ih"

    // by 

void MultiCompile::cleanup() const
{
    string tmpDir = Options::instance().tmp();
    if (d_madeTmp and not tmpDir.empty())
        fs::remove(tmpDir);
}
