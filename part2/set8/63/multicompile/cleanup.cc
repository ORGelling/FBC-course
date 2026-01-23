#include "multicompile.ih"

    // by 

void MultiCompile::cleanup() const
{
    // remove errors.log
    string tmpDir = Options::instance().tmp();
    fs::path errorFile = fs::path(tmpDir) / "errors.log";
                                                    // THIS IS NOT CORRECT.
                                                    // Should put it in dtor
    error_code ec;
    fs::remove(errorFile, ec);
    
    // remove tmpdir only if it has a specified value
    if (d_madeTmp and not tmpDir.empty())
        fs::remove(tmpDir);
}
